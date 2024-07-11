#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.size()-1;
    while(i>=0 && str[i]==str[0]){
        i--;
    }
    string palin = str.substr(0, i+1);
    if(is_palindrome(palin)) return str + str.substr(0,i+1);
    return str + str.substr(i+1).reverse();
}