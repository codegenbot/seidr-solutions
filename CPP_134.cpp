/*
Create a function that returns true if the last character
of a given string is an alphabetical character and is not
a part of a word, and false otherwise.
Note: "word" is a group of characters separated by space.

Examples:
check_if_last_char_is_a_letter("apple pie") ➞ false
check_if_last_char_is_a_letter("apple pi e") ➞ true
check_if_last_char_is_a_letter("apple pi e ") ➞ false
check_if_last_char_is_a_letter("") ➞ false 
*/
#include<stdio.h>
#include<string>
using namespace std;
bool check_if_last_char_is_a_letter(string txt){
	int i,j,k,l,m,n;
	char a[100];
	gets(a);
	for(i=0;a[i]!='\0';i++);
	if(a[i-1]>='a'&&a[i-1]<='z'||a[i-1]>='A'&&a[i-1]<='Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	string txt;
	bool result;
	result=check_if_last_char_is_a_letter(txt);
	if(result==true)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
