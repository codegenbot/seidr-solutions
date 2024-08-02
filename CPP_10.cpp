#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If input string is already a palindrome, just return it
    int i = 0;
    while(i < str.length() && str[i] == ' ') i++; // skip leading spaces
    for(int j = str.length()-1; j > i && str[j] == ' '; j--); // find the last non-space character from right
    string prefix = str.substr(0, j+1);
    int rev_len = str.length() - (j + 1);
    string postfix = str.substr(j+1);
    reverse(postfix.begin(),postfix.end());
    return prefix + postfix;
}