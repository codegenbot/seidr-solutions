#include <iostream>
#include <cassert>
#include <string>

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

int main() {
    string str = "abc";
    string encoded_str = "cab";
    assert(decode_cyclic(encoded_str) == str);
    cout << "Test passed!" << endl;
    return 0;
}