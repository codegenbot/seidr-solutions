#include <algorithm>
#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.length()-1;
    while(i>=0 && str[i]==str[0]){
        i--;
    }
    if(i<0) return str+str; // if the input string is already a palindrome
    return str.substr(0,i+1)+std::string(reverse(str.substr(i+1))).substr(0, std::string(reverse(str.substr(i+1))).length());
}