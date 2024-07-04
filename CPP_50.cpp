#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encode_shift(string s) {
    string out;
    int i;
    for (i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out = out + (char)w;
    }
    return out;
}

string decode_shift(string s) {
    string out;
    int i;
    for (i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out = out + (char)w;
    }
    return out;
}

int main() {
    string str = "example";  // Example string for testing.
    string encoded_str = encode_shift(str);

    // Validate that decoding the encoded string results in the original string.
    assert(decode_shift(encoded_str) == str);

    // Print encoded and decoded strings to verify.
    cout << "Original: " << str << endl;
    cout << "Encoded: " << encoded_str << endl;
    cout << "Decoded: " << decode_shift(encoded_str) << endl;

    return 0;
}