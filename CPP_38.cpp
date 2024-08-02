#include <iostream>
#include <string>
using namespace std;

string encode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

string decode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i < num; i++) {
        if (i == num - 1 && l % 3 != 0)
            output += s.substr(i * 3);
        else
            output += s.substr(i * 3, 3).substr(1) + s.substr(i * 3, 3)[0];
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