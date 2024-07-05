#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string decode_cyclic(string s){ 
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}

string encode_cyclic(string s) {
    int l = s.length();
    string output;
    for (int i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1, 2) + x[0];
        output += x;
    }
    return output;
}

int main() {
    string str, encoded_str;
    char chr;
    while ((chr = getchar()) != EOF) {
        str += chr;
    }
    encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    return 0;
}