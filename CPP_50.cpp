#include <iostream>
#include <string>
using namespace std;

string decode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

// Assuming there's an encode_shift function for testing
string encode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

int main() {
    string str, encoded_str;
    cout << "Enter a string to encode and then decode: ";
    cin >> str;
    encoded_str = encode_shift(str);
    cout << "Encoded string: " << encoded_str << endl;
    cout << "Decoded string: " << decode_shift(encoded_str) << endl;

    return 0;
}