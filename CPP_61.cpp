/*
brackets is a string of '(' and ')'.
return true if every opening bracket has a corresponding closing bracket.

>>> correct_bracketing("(")
false
>>> correct_bracketing("()")
true
>>> correct_bracketing("(()())")
true
>>> correct_bracketing(")(()")
false
*/
#include<stdio.h>
#include<string>
using namespace std;
bool correct_bracketing(string brackets){
	int i=0;
	int c=0;
	while(brackets[i]!='\0')
	{
		if(brackets[i]=='(')
		{
			c++;
		}
		if(brackets[i]==')')
		{
			c--;
		}
		if(c<0)
		{
			return false;
		}
		i++;
	}
	if(c!=0)
	{
		return false;
	}
	return true;
}
