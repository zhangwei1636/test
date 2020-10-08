#include <REGX52.H>

//#define LED  P2
//#define KEY  P1

void main()
{
	//unsigned char num = 0x01;
	//P1 = num;
	
	//KEY = 0xFF;
	P1 = 0xff;
	while(1)
	{
		//num = num << 1;
		//P1 = num;
		
		//LED = KEY;
		P2 = P1;
	}
}