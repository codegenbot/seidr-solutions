#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string decode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out = out + (char)w;
    }
    return out;
}

string encode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out = out + (char)w;
    }
    return out;
}

int main() {
    string str;
    cout << "Enter a string to encode and decode: ";
    cin >> str;
    string encoded_str = encode_shift(str);
    cout << "Encoded string: " << encoded_str << endl;
    cout << "Decoded string: " << decode_shift(encoded_str) << endl;
    assert(decode_shift(encoded_str) == str);
    cout << "Encoding and decoding is correct." << endl;
    return 0;
}