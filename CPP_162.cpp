/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<iostream>
#include<stdio.h>
#include<sstream>
using namespace std;
string string_to_md5(string text)
{
    stringstream ss;
    ss<<text;
    return ss.str();
}
int main(){
    string s,a;
    cin>>s>>a;
    cout<<string_to_md5(s)<<endl;
    cout<<string_to_md5(a)<<endl;
}
