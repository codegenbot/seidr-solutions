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
	int i=0;
	int j=text.size()-1;
	while(i<j){
		if(text[i]!=text[j]){
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}
