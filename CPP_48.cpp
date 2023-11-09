/*
Checks if given string is a palindrome
>>> is_palindrome("")
true
>>> is_palindrome("aba")
true
>>> is_palindrome("aaaaa")
true
>>> is_palindrome("zbcd")
false
*/
#include<stdio.h>
#include<string>
using namespace std;
bool is_palindrome(string text){
	int i,j;
	for(i=0,j=text.length()-1;i<j;i++,j--){
		if(text[i]!=text[j]){
			return false;
		}
	}
	return true;
}
