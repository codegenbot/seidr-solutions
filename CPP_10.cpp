```
#include<stdio.h>
#include<string>
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
            char temp[len+1]; 
            for(int i = 0; i < len; i++) {
                temp[i] = prefix[i];
            }
            temp[len] = '\0'; 
            return prefix + string(temp) + suffix;
        }
    }
    char temp[str.length() + 1]; 
    for(int i = 0; i < str.length(); i++) {
        temp[i] = str[i];
    }
    temp[str.length()] = '\0'; 
    return str + string(temp);
}