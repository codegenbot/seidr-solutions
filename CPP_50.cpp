#include<stdio.h>
#include<string>
using namespace std;

string encode_shift(string s){
    int i;
    string out;
    for (i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            char c = s[i];
            if(islower(c))
                c = ((c - 'a' + 5) % 26) + 'a';
            else
                c = ((c - 'A' + 5) % 26) + 'A';
            out += c;
        }
        else
            out += s[i];
    }
    return out;
}

string decode_shift(string s){
    int i;
    string out;
    for (i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            char c = s[i];
            if(islower(c))
                c = ((c - 'a' + 25) % 26) + 'a';
            else
                c = ((c - 'A' + 25) % 26) + 'A';
            out += c;
        }
        else
            out += s[i];
    }
    return out;
}