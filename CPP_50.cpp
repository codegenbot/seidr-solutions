#include<string>
#include<cctype>
using namespace std;

string encode_shift(string s) {
    string out;
    for (int i=0;i<s.length();i++) {
        int w ((s[i]-'a'+5)%26);
        out=out+(char)(w+'a');
    }
    return out;
}

string decode_shift(string s){
    string out;
    for (int i=0;i<s.length();i++) {
        int w ((s[i]-'a'-5+26)%26);
        out=out+(char)(w+'a');
    }
    return out;
}