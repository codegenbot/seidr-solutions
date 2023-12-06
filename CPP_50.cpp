
```
#include<iostream>
using namespace std;

string encode_shift(string s);
string decode_shift(string s);

int main(){
    string s, output;
    cin >> s;
    output = encode_shift(s);
    cout << output;
    return 0;
}

// Complete the code for the decode_shift function.
string decode_shift(string s){
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';   
        s[i]=w;
    }
    return s;
}
```