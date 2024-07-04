#include <iostream>
#include <string>
#include <cassert>

std::string decode_cyclic(const std::string &s) {
    size_t l = s.length();
    std::string x, output;
    for (size_t i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

std::string encode_cyclic(const std::string &str) {
    size_t l = str.length();
    std::string x, output;
    for (size_t i = 0; i * 3 < l; i++) {
        x = str.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1, 2) + x[0];
        output += x;
    }
    return output;
}

int main() {
    std::string str;
    std::cin >> str;

    std::string encoded_str = encode_cyclic(str);
    std::cout << "Encoded: " << encoded_str << std::endl;
    std::cout << "Decoded: " << decode_cyclic(encoded_str) << std::endl;

    assert(decode_cyclic(encoded_str) == str);
    std::cout << "All assertions passed." << std::endl;

    return 0;
}