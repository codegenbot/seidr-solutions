#include <string>
#include <cassert>
#include <iostream>
using namespace std;

string decode_cyclic(string s) {
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

string encode_cyclic(const string& s) {
    int l = s.length();
    string x, output;
    for (int i = 0; i < l; i += 3) {
        x = s.substr(i, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

int main() {
    string str;
    char chr;
    while (cin >> noskipws >> chr) {
        str += chr;
    }
    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    cout << encoded_str << endl;
    return 0;
}