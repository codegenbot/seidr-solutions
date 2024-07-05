#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string decode_cyclic(string s) { 
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}

string encode_cyclic(string s) {
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1, 2) + x[0];
        output = output + x;
    }
    return output;
}

int main() {
    string str;
    cout << "Enter a string to encode and then decode cyclically: ";
    cin >> str;

    string encoded_str = encode_cyclic(str);
    cout << "Encoded: " << encoded_str << endl;

    assert(decode_cyclic(encoded_str) == str);
    cout << "Decoded: " << decode_cyclic(encoded_str) << endl;

    return 0;
}