#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    string rev_str(str.rbegin(),str.rend());
    for(int i = 0; i < str.size(); i++){
        if(is_palindrome(str.substr(i))){
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}