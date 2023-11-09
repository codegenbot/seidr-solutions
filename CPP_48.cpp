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
    for(int i = 0; i < text.length(); i++){
        if(text[i] != text[text.length() - i - 1]){
            return false;
        }
    }
    return true;
}
