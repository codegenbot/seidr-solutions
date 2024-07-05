#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string encode_shift(string s) {
    string out;
    for (size_t i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

string decode_shift(string s) {
    string out;
    for (size_t i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string encoded_str = encode_shift(str);
    string decoded_str = decode_shift(encoded_str);
    cout << "Encoded String: " << encoded_str << endl;
    cout << "Decoded String: " << decoded_str << endl;
    assert(decode_shift(encoded_str) == str);
    cout << "Test passed" << endl;
    return 0;
}