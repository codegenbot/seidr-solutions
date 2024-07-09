#include <iostream>
#include <string>
using namespace std;

string encode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

string decode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - (int)'a' + 26) % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string encoded = encode_shift(input);
    string decoded = decode_shift(encoded);

    cout << "Encoded string: " << encoded << endl;
    cout << "Decoded string: " << decoded << endl;

    return 0;
}