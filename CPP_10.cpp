#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    string prefix = str;
    while (!is_palindrome(prefix)) {
        prefix += (str[0]);
    }
    return prefix + prefix.substr(0, str.length());
}