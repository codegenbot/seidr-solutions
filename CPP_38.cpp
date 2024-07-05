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

// Assuming the presence of encode_cyclic function defined elsewhere
string encode_cyclic(string s);

int main() {
    string str = "exampleinput";
    string encoded_str = encode_cyclic(str);  // This should call the actual encode function
    assert(decode_cyclic(encoded_str) == str);
    cout << "Test passed" << endl;

    return 0;
}