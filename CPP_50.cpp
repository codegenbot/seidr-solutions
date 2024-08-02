#include<stdio.h>
#include<string>
using namespace std;

string encode_shift(string s) {
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]+5-(int)'a')%26+(int)'a';   
        s[i]=(char)w;
    }
    return s;
}

string decode_shift(string s){
    int i;
    for (i=0;i<s.length();i++)
    {
        int w(((int)s[i])+((int)'a'-5)%26);   
        s[i]=(char)w;
    }
    return s;
}