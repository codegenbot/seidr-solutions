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
            std::string rev = prefix;
            std::reverse(rev.begin(), rev.end());
            return prefix + rev + suffix;
        }
    }
    std::string rev = str;
    std::reverse(rev.begin(), rev.end());
    return str+rev;
}