#include <iostream>
#include <cassert>

using namespace std;

string encode_cyclic(string s){
    // implementation of encode_cyclic function
    // ...
}

string decode_cyclic(string s){ 
    string output;
    int l=s.length();
    int num=(l+2)/3;
    string x;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x[2]+x.substr(0,2);
        output=output+x;
    }
    return output;
}

int main() {
    string str;
    cin >> str;

    string encoded_str = encode_cyclic(str);

    assert(decode_cyclic(encoded_str) == str);

    return 0;
}