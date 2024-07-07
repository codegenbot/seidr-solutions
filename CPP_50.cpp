#include<stdio.h>
#include<string>
using namespace std;

string encode_shift(string s) {
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        int w=((int)s[i]+5-(int)'a')%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}

string decode_shift(string s){
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';
        if(w<97)
            out=out+(char)(w+26);
        else
            out=out+(char)w;
    }
    return out;
}