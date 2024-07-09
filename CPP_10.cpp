#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If input string is palindrome, return it as it is
    string revStr = str; // Reverse the input string
    reverse(revStr.begin(), revStr.end()); 
    int i=0,j=str.length()-1;
    while(i<=j){
        if(str[i]==revStr[j]) break; // If characters at both ends match, stop
        i++; j--;
    }
    return str.substr(0,i)+revStr; // Return the shortest palindrome that begins with the input string
}