#include <iostream>
#include <string>
using namespace std;

string encode_cyclic(string s){ 
    // returns encoded string by cycling groups of three characters.  
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++)
    {
        // cycle elements in each group. Unless group has fewer elements than 3.
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output = output + x;
    }
    return output;
}

string decode_cyclic(string s){ 
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++)
    {
        // reverse cycle elements in each group. Unless group has fewer elements than 3.
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output = output + x;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter the string to encode: ";
    cin >> input;
    string encoded = encode_cyclic(input);
    cout << "Encoded: " << encoded << endl;
    string decoded = decode_cyclic(encoded);
    cout << "Decoded: " << decoded << endl;
    return 0;
}