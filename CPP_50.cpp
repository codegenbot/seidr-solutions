#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string decode_shift(const string& s) {
    string out;
    for (char c : s) {
        char w = ((c - 5 - 'a' + 26) % 26) + 'a';
        out += w;
    }
    return out;
}

string encode_shift(const string& s) {
    string out;
    for (char c : s) {
        char w = ((c + 5 - 'a') % 26) + 'a';
        out += w;
    }
    return out;
}

int main() {
    string str;
    cout << "Enter a string to encode: ";
    cin >> str;
    string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
    cout << "Encoded: " << encoded_str << endl;
    cout << "Decoded: " << decode_shift(encoded_str) << endl;
    return 0;
}