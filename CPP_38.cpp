```
#include <iostream>
#include <string>

using namespace std;

string encode_cyclic(string s);
string decode_cyclic(string s);

int main() {
    string str = "";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        string encoded = encode_cyclic(input);
        cout << "Encoded string: " << encoded << endl;
        string decoded = decode_cyclic(encoded);
        if (decoded == input) {
            cout << "Decoded string: " << decoded << endl;
        } else {
            cout << "Failed to decode the cyclic shift." << endl;
        }
    }
    return 0;
}

string encode_cyclic(string s) {
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
```