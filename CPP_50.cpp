#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// Function declaration for `decode_shift`
string decode_shift(string s);

// Example encode_shift function
string encode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out = out + (char)w;
    }
    return out;
}

// Function definition for `decode_shift`
string decode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out = out + (char)w;
    }
    return out;
}

int main() {
    string str;
    cout << "Enter a string to encode: ";
    cin >> str;
    string encoded_str = encode_shift(str);
    cout << "Encoded string: " << encoded_str << endl;

    string decoded_str = decode_shift(encoded_str);
    cout << "Decoded string: " << decoded_str << endl;

    assert(decoded_str == str);
    cout << "Encoding and decoding is correct." << endl;
    return 0;
}