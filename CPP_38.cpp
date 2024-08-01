#include <iostream>
#include <string>
#include <cassert>

std::string encode_cyclic(std::string s) {
    int l = s.length();
    std::string encoded_str;
    for (int i = 0; i * 3 < l; i++) {
        std::string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[1] + x.substr(0, 2);
        encoded_str += x;
    }
    return encoded_str;
}

std::string decode_cyclic(std::string s) {
    int l = s.length();
    std::string decoded_str;
    for (int i = 0; i * 3 < l; i++) {
        std::string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        decoded_str += x;
    }
    return decoded_str;
}

int main() {
    std::string str;
    std::cin >> str;
    
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    
    return 0;
}