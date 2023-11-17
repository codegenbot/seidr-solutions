#include<stdio.h>
#include<string>
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
    // returns encoded string by substituting every character with the character at the corresponding index in the string "qwertyuiopasdfghjklzxcvbnm".
    string out;
    int i;
    string key="qwertyuiopasdfghjklzxcvbnm";
    for (i=0;i<s.length();i++)
    {
        int w=(int)s[i]-(int)'a';   
        out=out+key[w];
    }
    return out;
}
string decode_substitution(string s){
    // takes as input string encoded with encode_substitution function. Returns decoded string.
    string out;
    int i;
    string key="qwertyuiopasdfghjklzxcvbnm";
    for (i=0;i<s.length();i++)
    {
        int w=key.find(s[i]);   
        out=out+(char)(w+(int)'a');
    }
    return out;
}
int main(){
    string s;
    cin>>s;
    string encoded_s=encode_shift(s);
    cout<<encoded_s<<endl;
    cout<<decode_shift(encoded_s)<<endl;
    encoded_s=encode_substitution(s);
    cout<<encoded_s<<endl;
    cout<<decode_substitution(encoded_s)<<endl;
    return 0;
}
