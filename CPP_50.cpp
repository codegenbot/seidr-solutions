#include<stdio.h>
#include<string>
using namespace std;

string encode_shift(string s) {
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        if((int)s[i]>122||(int)s[i]<97){ // check if the character is not a lowercase letter
            if((int)s[i]>122&&(int)s[i]<123) w = ((int)s[i] - 5); // shift uppercase letters
            else w = ((int)s[i]+5-91)%26+64; // shift digits and symbols
        }
        out += (char)w;
    }
    return out;
}

string decode_shift(string s){
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        if((int)s[i]>122||(int)s[i]<97){ // check if the character is not a lowercase letter
            if((int)s[i]>122&&(int)s[i]<123) w = ((int)s[i] - 5); // shift uppercase letters
            else w = ((int)s[i]+5-91)%26+64; // shift digits and symbols
        }
        out += (char)w;
    }
    return out;
}