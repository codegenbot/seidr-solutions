#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encode_cyclic(string str) {
    int len = str.length();
    string encoded_str = "";
    for (int i = 0; i < len; i++) {
        encoded_str += char((str[i] + 3 - 'a') % 26 + 'a');
    }
    return encoded_str;
}

string decode_cyclic(string str) {
    int len = str.length();
    string decoded_str = "";
    for (int i = 0; i < len; i++) {
        decoded_str += char((str[i] - 3 - 'a' + 26) % 26 + 'a');
    }
    return decoded_str;
}

int main() {
    string input_str;
    cin >> input_str;
    
    string encoded_str = encode_cyclic(input_str);
    cout << "Encoded: " << encoded_str << endl;
    
    string decoded_str = decode_cyclic(encoded_str);
    cout << "Decoded: " << decoded_str << endl;
    
    assert(decoded_str == input_str);
    
    return 0;
}