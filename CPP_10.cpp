#include<stdio.h>
#include<string>
using namespace std;
bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}
string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palin_str = str;
    for(int i = str.length()-1; i>=0; i--){
        if(is_palindrome(palin_str)){
            break;
        }
        palin_str += rev_str[i];
    }
    return palin_str;
}