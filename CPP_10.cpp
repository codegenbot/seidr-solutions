#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i = 0;
    while(i < str.length() && !is_palindrome(str.substr(0, i+1))){
        i++;
    }
    return str.substr(0, i) + reverse(str.substr(i)).toString();
}