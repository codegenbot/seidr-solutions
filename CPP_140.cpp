/*
Given a string text, replace all spaces in it with underscores, 
and if a string has more than 2 consecutive spaces, 
then replace all consecutive spaces with - 

fix_spaces("Example") == "Example"
fix_spaces("Example 1") == "Example_1"
fix_spaces(" Example 2") == "_Example_2"
fix_spaces(" Example   3") == "_Example-3"
*/
#include<stdio.h>
#include<string>
using namespace std;
string fix_spaces(string text){
	int i,j=0;
	char a[100];
	for(i=0;i<text.length();i++)
	{
		if(text[i]==' ')
		{
			if(i==0)
			{
				a[j]='_';
				j++;
			}
			else if(text[i-1]==' ')
			{
				a[j]='-';
				j++;
			}
			else
			{
				a[j]='_';
				j++;
			}
		}
		else
		{
			a[j]=text[i];
			j++;
		}
	}
	a[j]='\0';
	string s(a);
	return s;
}
