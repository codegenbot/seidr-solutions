#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If input string is already palindrome, just return it
    for(int i = 0; i < str.length(); i++){
        string suffix = str.substr(i);
        if(is_palindrome(suffix)){
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return prefix + suffix + prefix;
        }
    }
    return str; // If no palindromic suffix found, just return the original string
}