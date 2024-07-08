#include <iostream>
#include <string>
#include <cassert>

std::string encode_cyclic(const std::string& s) {
    std::string encoded_str;
    for (int i = 0; i < s.length(); i += 3) {
        std::string x = s.substr(i, 3);
        x = x.substr(1) + x[0];
        encoded_str += x;
    }
    return encoded_str;
}

std::string decode_cyclic(const std::string& s) {
    std::string decoded_str;
    for (int i = 0; i < s.length(); i += 3) {
        std::string x = s.substr(i, 3);
        x = x[2] + x.substr(0, 2);
        decoded_str += x;
    }
    return decoded_str;
}

int main() {
    std::string str;
    str = "abcde";
    std::string encoded_str = encode_cyclic(str);
    std::string decoded_str = decode_cyclic(encoded_str);

    assert(decoded_str == str);

    std::cout << "Original: " << str << std::endl;
    std::cout << "Encoded: " << encoded_str << std::endl;
    std::cout << "Decoded: " << decoded_str << std::endl;

    return 0;
}