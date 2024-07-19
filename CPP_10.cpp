#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If the string is already a palindrome, just return it
    for(int len=str.length();len>0;--len){
        string prefix=str.substr(0,len);
        string postfix=str.substr(len);
        if(is_palindrome(postfix)){
            return prefix+postfix;
        }
    }
    return str+"a"+str; // If no palindrome found, append "a" in the middle
}