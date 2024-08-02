#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.length()-1,j=0;
    while(i>=0 && str[i--]!=str[j])
        j++;
    string left=str.substr(0,j);
    string right=str.substr(j)+string(str.rbegin(),str.rend()).substr(1);
    return left+left=="" ? str : left+right;
}