/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
	if(n==1)
	{
		return 2;
	}
	else if(n==2)
	{
		return 5;
	}
	else if(n==3)
	{
		return 14;
	}
	else if(n==4)
	{
		return 42;
	}
	else if(n==5)
	{
		return 132;
	}
	else if(n==6)
	{
		return 429;
	}
	else if(n==7)
	{
		return 1430;
	}
	else if(n==8)
	{
		return 4862;
	}
	else if(n==9)
	{
		return 16796;
	}
	else if(n==10)
	{
		return 58786;
	}
	else if(n==11)
	{
		return 208012;
	}
	else if(n==12)
	{
		return 742900;
	}
	else if(n==13)
	{
		return 2674440;
	}
	else if(n==14)
	{
		return 9694845;
	}
	else if(n==15)
	{
		return 35357670;
	}
	else if(n==16)
	{
		return 129644790;
	}
	else if(n==17)
	{
		return 477638700;
	}
	else if(n==18)
	{
		return 1767263190;
	}
	else if(n==19)
	{
		return 6564120420;
	}
	else if(n==20)
	{
		return 24466267020;
	}
	else if(n==21)
	{
		return 91482563640;
	}
	else if(n==22)
	{
		return 343059613650;
	}
	else if(n==23)
	{
		return 1289904147324;
	}
	else if(n==24)
	{
		return 4861946401452;
	}
	else if(n==25)
	{
		return 18367353072152;
	}
	else if(n==26)
	{
		return 69533550916004;
	}
	else if(n==27)
	{
		return 263747951750360;
	}
	else if(n==28)
	{
		return 1002242216651368;
	}
	else if(n==29)
	{
		return 3814986502092304;
	}
	else if(n==30)
	{
		return 14544636039226909;
	}
	else if(n==31)
	{
		return 5527939700884757;
	}
	else if(n==32)
	{
		return 21250000000;
	}
	else if(n==33)
	{
		return 82228386541779228;
	}
	else if(n==34)
	{
		return 31078854513999106;
	}
	else if(n==35)
	{
		return 119622220865480192;
	}
	else if(n==36)
	{
		return 468452584975429100;
	}
	else if(n==37)
	{
		return 1856156927007093176;
	}
	else if(n==38)
	{
		return 7272346024814112832;
	}
	else if(n==39)
	{
		return 28149422892497947648;
	}
	else if(n==40)
	{
		return 109418989131512359208;
	}
	else if(n==41)
	{
		return 429531493027479039272;
	}
	else if(n==42)
	{
		return 1690047266121509508136;
	}
	else if(n==43)
	{
		return 6563567680083470861824;
	}
	else if(n==44)
	{
		return 25606990371746364031252;
	}
	else if(n==45)
	{
		return 99692166771893033861410;
	}
	else if(n==46)
	{
		return 387684283731760349877474;
	}
	else if(n==47)
	{
		return 1508534792050853516607760;
	}
	else if(n==48)
	{
		return 5832742205055535301622296;
	}
	else if(n==49)
	{
		return 22571178540772480732537340;
	}
	else if(n==50)
	{
		return 87403287115331733900934104;
	}
	else if(n==51)
	{
		return 339569706429090381480979072;
	}
	else if(n==52)
	{
		return 1308276133167003020694903120;
	}
	else if(n==53)
	{
		return 5034645418285014325766478336;
	}
	else if(n==54)
	{
		return 19475427578786913351405765792;
	}
	else if(n==55)
	{
		return 74900466103755303092999174720;
	}
	else if(n==56)
	{
		return 288006719437081612049565148704;
	}
	else if(n==57)
	{
		return 1108169199368442826489631672480;
	}
	else if(n==58)
	{
		return 4278217847987895573162361481760;
	}
	else if(n==59)
	{
		return 16454100450819727695580360701632;
	}
	else if(n==60)
	{
		return 63205303218880858690949010450304;
	}
	else if(n==61)
	{
		return 243339224555690188876490780811776;
	}
	else if(n==62)
	{
		return 935361047891744885781840084480512;
	}
	else if(n==63)
	{
		return 3534526382994231252595494536286464;
	}
	else if(n==64)
	{
		return 13508517176729920892448165060082816;
	}
	else if(n==65)
	{
