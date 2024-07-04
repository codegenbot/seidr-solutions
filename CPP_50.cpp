#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encode_shift(string s) {
    string out;
    for (char c : s) {
        out += (char)((c + 5 - 'a') % 26 + 'a');
    }
    return out;
}

string decode_shift(string s) {
    string out;
    for (char c : s) {
        out += (char)((c - 5 - 'a' + 26) % 26 + 'a');
    }
    return out;
}

int main() {
    string str = "abcdefghijklmnopqrstuvwxyz";
    string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
    cout << "Test passed" << endl;
    return 0;
}