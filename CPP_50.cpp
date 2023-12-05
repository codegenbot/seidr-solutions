
```
#include<stdio.h>
#include<string>
using namespace std;

// Declare encode_shift function before its usage in the main function.
string encode_shift(string s);

int main(){
    string s, output;
    cin >> s;
    output = decode_shift(s);
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