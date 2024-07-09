#include<string>
using namespace std;

string encode_shift(string s) {
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        char c = s[i];
        if(c >= 'a' && c <= 'z') {
            c = (c - 'a' + 5) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z') {
            c = (c - 'A' + 5) % 26 + 'A';
        }
        out += c;
    }
    return out;
}

string decode_shift(string s){
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        char c = s[i];
        if(c >= 'a' && c <= 'z') {
            c = (c - 'a' - 5) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z') {
            c = (c - 'A' - 5) % 26 + 'A';
        }
        out += c;
    }
    return out;
}