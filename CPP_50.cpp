
```c++
#include <iostream>
using namespace std;

string str = "";

string encode_shift(string s) {
    // takes as input string and returns encoded string
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
    return s;
}

string decode_shift(string s) {
    // takes as input string encoded with encode_shift function. Returns decoded string.
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
    return s;
}

int main() {
    // test the encode_shift and decode_shift functions
    string str = "hello";
    cout << "Encoded: " << encode_shift(str) << endl;
    cout << "Decoded: " << decode_shift(encode_shift(str)) << endl;
    return 0;
}
```