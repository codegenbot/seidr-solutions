#include <string>
#include <cassert>

using namespace std;

string encode_cyclic(string s) {
    int l = s.length();
    string encoded_str;
    for (int i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[1] + x.substr(0, 2);
        encoded_str += x;
    }
    return encoded_str;
}

string decode_cyclic(string s) {
    int l = s.length();
    string decoded_str;
    for (int i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        decoded_str += x;
    }
    return decoded_str;
}

int main() {
    string str = "HelloWorld123";
    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    
    return 0;
}