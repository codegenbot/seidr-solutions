#include <iostream>
#include <string>
using namespace std;

// Define the encode_shift function
string encode_shift(string s) {
    int i;
    for (i = 0; i < s.length(); i++) {
        int w = ((int)s[i] - 5 - (int)'a') % 26 + (int)'a';
        s[i] = w;
    }
    return s;
}

// Define the decode_shift function
string decode_shift(string s) {
    int i;
    for (i = 0; i < s.length(); i++) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        s[i] = w;
    }
    return s;
}

int main() {
    string str, encoded_str, decoded_str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Encode the input string using encode_shift function
    encoded_str = encode_shift(str);
    cout << "Encoded string: " << encoded_str << endl;

    // Decode the encoded string using decode_shift function
    decoded_str = decode_shift(encoded_str);
    cout << "Decoded string: " << decoded_str << endl;

    return 0;
}