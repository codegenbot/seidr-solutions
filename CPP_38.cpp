#include <iostream>
#include <string>
#include <cassert>

std::string decode_cyclic(const std::string &s) {
    int l = s.length();
    std::string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

std::string encode_cyclic(const std::string &s) {
    int l = s.length();
    std::string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1, 2) + x[0];
        output += x;
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string to encode and decode: ";
    std::cin >> input;

    std::string encoded_str = encode_cyclic(input);
    std::string decoded_str = decode_cyclic(encoded_str);

    assert(decoded_str == input);
    std::cout << "Encoded string: " << encoded_str << "\n";
    std::cout << "Decoded string: " << decoded_str << "\n";
    std::cout << "All assertions passed." << std::endl;

    return 0;
}