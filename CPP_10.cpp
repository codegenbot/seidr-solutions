#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If the input string is already a palindrome, just return it
    for(int i=str.size()-1;i>=0&&is_palindrome(str.substr(0,i+1));i--); 
    return str.substr(0,i+1) + str.substr(i+1).reverse();
}