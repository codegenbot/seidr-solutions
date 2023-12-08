#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(),str.rend());
    return s==str;
}
string make_palindrome(string str){
    /*
    Find the shortest palindrome that begins with a supplied string. 
    Algorithm idea is simple: - Find the longest postfix of supplied string that is a palindrome. 
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    */
    int i = str.length()-1;
    while(i>=0 && !is_palindrome(str.substr(0,i+1))){
        i--;
    }
    if(i==-1) return "";
    string prefix = str.substr(0,i+1);
    string suffix = str.substr(i+1);
    reverse(suffix.begin(),suffix.end());
    return prefix + suffix;
}