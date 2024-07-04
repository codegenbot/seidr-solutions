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
        output += x;
    }
    return output;
}

string encode_cyclic(string s) {
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

int main() {
    string str = "abcdef";
    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    cout << "All tests passed!" << endl;
    return 0;
}