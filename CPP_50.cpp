#include <stdio.h>
#include <string>
using namespace std;

string encode_shift(string s) {
    // takes as input string and returns encoded string
    return s;
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

int main() {
    string s = "hello";
    cout << encode_shift(s) << endl;
    cout << decode_shift(s) << endl;
    return 0;
}