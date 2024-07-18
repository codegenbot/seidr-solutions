#include <iostream>
#include <string>
using namespace std;

string decode_cyclic(string s) {
    string output;
    for (int i = 0; i < s.length(); i += 3) {
        string x = s.substr(i, 3);
        x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a string to encode: ";
    cin >> input;

    string encoded = encode_cyclic(input);
    cout << "Encoded string: " << encoded << endl;

    string decoded = decode_cyclic(encoded);
    cout << "Decoded string: " << decoded << endl;

    return 0;
}