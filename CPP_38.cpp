```
#include <iostream>
#include <string>
using namespace std;

string encode_cyclic(const string& str) {
    // Implement cyclic encoding here
    string encoded_str = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            c += 3;
        } else if (c >= 'A' && c <= 'Z') {
            c -= 3;
        }
        encoded_str += c;
    }
    return encoded_str;
}

string decode_cyclic(const string& encoded_str) {
    // Implement cyclic decoding here
    string decoded_str = "";
    for (int i = 0; i < encoded_str.length(); i++) {
        char c = encoded_str[i];
        if (c >= 'a' && c <= 'z') {
            c -= 3;
        } else if (c >= 'A' && c <= 'Z') {
            c += 3;
        }
        decoded_str += c;
    }
    return decoded_str;
}

int main() {
    string str = "Hello World!";
    string encoded_str = encode_cyclic(str);
    cout << "Encoded string: " << encoded_str << endl;
    string decoded_str = decode_cyclic(encoded_str);
    cout << "Decoded string: " << decoded_str << endl;
    return 0;
}
```