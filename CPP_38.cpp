
```cpp
#include <iostream>
#include <string>
using namespace std;

// Declare the functions before using them
string encode_cyclic(string s);
string decode_cyclic(string s);

int main() {
    string str = ""; // Initialize the variable `str` as an empty string
    int num;
    cout << "Enter a number: ";
    cin >> num;
    str = encode_cyclic(num);
    cout << "Encoded number: " << str << endl;
    cout << "Decoded number: " << decode_cyclic(str) << endl;
    return 0;
}

// Implement the functions
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