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

int main() {
    string str;
    cout << "Enter an encoded string to decode: ";
    cin >> str;
    cout << "Decoded string: " << decode_shift(str) << endl;
    return 0;
}