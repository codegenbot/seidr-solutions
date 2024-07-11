#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i=str.size()-1;
    while(i>=0 && str[i]==str[0])
        i--;
    if(i<0)
        return str+str;
    return str.substr(0,i+1)+reverse(str.substr(i+1)).toString();
}