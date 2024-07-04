#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string encode_shift(string s) {
    // Encode function which is inverse of decode_shift
    string out;
    for (int i = 0; i < s.length(); ++i) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

string decode_shift(string s) {
    // takes as input string encoded with encode_shift function. Returns decoded string.
    string out;
    for (int i = 0; i < s.length(); ++i) {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

int main() {
    string test_str = "example";
    string encoded_str = encode_shift(test_str);
    assert(decode_shift(encoded_str) == test_str);

    cout << "Test passed: " << encoded_str << " -> " << test_str << endl;
}