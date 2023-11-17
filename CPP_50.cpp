#include<stdio.h>
#include<iostream>
#include <ostream>
using namespace std;
string encode_shift(string s){
    // returns encoded string by shifting every character by 5 in the alphabet.
    string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]+5-(int)'a')%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}
string decode_shift(string s){
    // takes as input string encoded with encode_shift function. Returns decoded string.
    string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}
string encode_substitution(string s){
    // returns encoded string by substituting every character with the character at a fixed distance.
    string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]+3-(int)'a')%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}
string decode_substitution(string s){
    // takes as input string encoded with encode_substitution function. Returns decoded string.
    string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-3-(int)'a')%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}
string encode_vigenere(string s,string key){
    // returns encoded string by using vigenere cipher.
    string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]+(int)key[i%key.length()]-(int)'a')%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}
string decode_vigenere(string s,string key){
    // takes as input string encoded with encode_vigenere function. Returns decoded string.
    string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-(int)key[i%key.length()]-(int)'a')%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}
int main(){
    string s;
    cin>>s;
    string key;
    cin>>key;
    string encoded_string=encode_vigenere(s,key);
    cout<<encoded_string<<"\n";
    string decoded_string=decode_vigenere(encoded_string,key);
    cout<<decoded_string<<"\n";
    return 0;
}
