#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string decode_shift(const string &s){
    string out;
    for (int i = 0; i < s.length(); ++i){
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';   
        out += (char)w;
    }
    return out;
}

string encode_shift(const string &s){
    string out;
    for (int i = 0; i < s.length(); ++i){
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';   
        out += (char)w;
    }
    return out;
}

int main() {
    string str = "abcde";  // Example input
    string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
    cout << "Encoding: " << encoded_str << endl;
    cout << "Decoding: " << decode_shift(encoded_str) << endl;
    return 0;
}