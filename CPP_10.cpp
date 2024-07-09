#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If input string is already palindrome, just return it.
    
    int i = 0;
    while(i < str.length() && str[i] == ' ') i++; // Skip leading spaces
    for(int j=str.length()-1; j>=0 && str[j] == ' '; j--) str.erase(j, 1); // Remove trailing spaces
    
    string rev_str = "";
    for(int i=str.length()-1; i>=0; i--) rev_str += str[i]; // Reverse the string
    return str + rev_str;
}