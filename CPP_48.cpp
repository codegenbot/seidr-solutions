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
	int left = 0;
	int right = text.length() - 1;
	while (left < right) {
		if (text[left] != text[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}
