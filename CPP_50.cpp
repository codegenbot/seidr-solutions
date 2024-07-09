#include<stdio.h>
#include<string>
using namespace std;

string encode_shift(string s) {
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        if(w >= (int)'a' && w <= (int)'z')
            out += (char)w;
        else
            out += (char)(w-(int)'a'+(int)'A');
    }
    return out;
}

string decode_shift(string s) {
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        int w = ((int)s[i] + 21 - (int)'a') % 26 + (int)'a';
        if(w >= (int)'a' && w <= (int)'z')
            out += (char)w;
        else
            out += (char)(w-(int)'a'+(int)'A');
    }
    return out;
}