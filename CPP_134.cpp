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
	int i,n;
	n=txt.length();
	if(n==0)
		return false;
	for(i=n-1;i>=0;i--)
	{
		if(txt[i]==' ')
			return false;
		if(txt[i]>='a' && txt[i]<='z')
			return true;
		if(txt[i]>='A' && txt[i]<='Z')
			return true;
	}
	return false;
}
int main()
{
	string s;
	getline(cin,s);
	if(check_if_last_char_is_a_letter(s))
		printf("true");
	else
		printf("false");
	return 0;
}
