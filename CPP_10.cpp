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
    string prefix=str.substr(0,i+1);
    string suffix=str.substr(i+1)+string(str.rbegin(),str.rend()).substr(prefix.length());
    return prefix+prefix+suffix;
}