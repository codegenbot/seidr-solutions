#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str))
        return str;
    for(int len=str.length();len>0;len--){
        string prefix = str.substr(0, len);
        string suffix = str.substr(len);
        if(is_palindrome(suffix)){
            string rev = prefix;
            reverse(rev.begin(), rev.end());
            return prefix + rev + suffix;
        }
    }
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str+rev;
}