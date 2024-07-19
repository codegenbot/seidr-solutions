#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    string rev = string(str.rbegin(), str.rend());
    for (int i = str.length(); i > 0; i--) {
        string postfix = str.substr(str.length() - i, i);
        if (is_palindrome(postfix)) {
            return str + rev.substr(0, str.length() - i);
        }
    }
    return str + rev.substr(1, str.length());
}