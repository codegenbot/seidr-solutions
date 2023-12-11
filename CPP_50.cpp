
#include <iostream>
#include <string>
using namespace std;

// Declare variable 'str'
string str;

// Declare function 'encode_shift'
void encode_shift(string& s);

// Declare function 'decode_shift'
void decode_shift(string& s);

int main() {
    // Take input from user
    cout << "Enter a string: ";
    getline(cin, str);

    // Call encode_shift function to encode the string
    encode_shift(str);

    // Print encoded string
    cout << "Encoded string: " << str << endl;

    // Call decode_shift function to decode the string
    decode_shift(str);

    // Print decoded string
    cout << "Decoded string: " << str << endl;

    return 0;
}

// Define functions 'encode_shift' and 'decode_shift'
void encode_shift(string& s) {
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c += 5;
            if (c > 'z') {
                c -= 26;
            }
        } else if (c >= 'A' && c <= 'Z') {
            c += 5;
            if (c > 'Z') {
                c -= 26;
            }
        }
        s[i] = c;
    }
}

void decode_shift(string& s) {
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c -= 5;
            if (c < 'a') {
                c += 26;
            }
        } else if (c >= 'A' && c <= 'Z') {
            c -= 5;
            if (c < 'A') {
                c += 26;
            }
        }
        s[i] = c;
    }
}