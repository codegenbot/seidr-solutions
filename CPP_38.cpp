#include <iostream>
#include <cassert>

using namespace std;

string encode_cyclic(string s){
    int l = s.length();
    string output;
    for(int i = 0; i < l; i++){
        char chr = s[i];
        chr = (chr + 1) % 128;
        output += chr;
    }
    return output;
}

string decode_cyclic(string s){
    int l = s.length();
    string output;
    for(int i = 0; i < l; i += 3){
        string x = s.substr(i, 3);
        if(x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    string str;
    cin >> str;
    
    string encoded_str = encode_cyclic(str);
    assert (decode_cyclic(encoded_str) == str);
    
    return 0;
}