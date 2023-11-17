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
string result="";
int i=0;
int count=0;
while(text[i]!='\0')
{
if(text[i]==' ')
{
count++;
if(count>2)
{
result=result+"-";
}
}
else
{
count=0;
result=result+text[i];
}
i++;
}
return result;
}
int main()
{
string s="Example   3";
cout<<fix_spaces(s);
}
