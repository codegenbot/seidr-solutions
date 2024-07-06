#include <iostream>
using namespace std;

string encode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, min(3, l - i * 3));
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

string decode_cyclic(string s) {
    string output;
    for (int i = 0; i < s.length(); ) {
        if (i + 2 < s.length() && s[i] == s[i+1]) {
            output += s[i];
            i += 2;
        } else {
            output += s.substr(i, 3);
            i += 3;
        }
    }
    return output;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string encoded = encode_cyclic(str);
    cout << "Encoded string: " << encoded << endl;
    string decoded = decode_cyclic(encoded);
    cout << "Decoded string: " << decoded << endl;
    return 0;
}