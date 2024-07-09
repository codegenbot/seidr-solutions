#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str;
    int i=str.length()-1,j=0;
    while(i>=0 && !is_palindrome(str.substr(0,i+1))){
        i--;
    }
    string prefix=str.substr(0,i+1);
    std::string rev = str.substr(0, i + 1);
    std::reverse(rev.begin(), rev.end());
    return str.substr(i+1) + rev;
}