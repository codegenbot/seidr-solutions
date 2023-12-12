```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello";
    int shift = 1;
    string encoded_str = encode_shift(str, shift);
    assert (decode_shift(encoded_str) == str);
    return 0;
}

string encode_shift(string str, int shift) {
    for (int i = 0; i < str.length(); i++) {
        char chr = str[i];
        if (chr >= 'a' && chr <= 'z') {
            chr = 'a' + ((chr - 'a') + shift) % 26;
        } else if (chr >= 'A' && chr <= 'Z') {
            chr = 'A' + ((chr - 'A') + shift) % 26;
        }
        str += chr;
    }
    return str;
}

string decode_shift(string encoded_str, int shift) {
    for (int i = 0; i < encoded_str.length(); i++) {
        char chr = encoded_str[i];
        if (chr >= 'a' && chr <= 'z') {
            chr = 'a' + ((chr - 'a') - shift) % 26;
        } else if (chr >= 'A' && chr <= 'Z') {
            chr = 'A' + ((chr - 'A') - shift) % 26;
        }
        encoded_str += chr;
    }
    return encoded_str;
}
```