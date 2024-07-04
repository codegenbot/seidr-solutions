#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string decode_cyclic(string s) { 
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

int main() {
    string str, encoded_str;
    cout << "Enter the encoded string: ";
    cin >> encoded_str;
    str = decode_cyclic(encoded_str);
    cout << "Decoded string: " << str << endl;
    return 0;
}