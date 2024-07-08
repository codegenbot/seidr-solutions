#include <iostream>
#include <string>
#include <cassert>

std::string encode_shift(std::string s) {
    std::string out;
    for (int i = 0; i < s.length(); i++) {
        char w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out += w;
    }
    return out;
}

std::string decode_shift(std::string s) {
    std::string out;
    for (int i = 0; i < s.length(); i++) {
        char w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';
        out += w;
    }
    return out;
}

int main() {
    std::string input_str = "hello";
    std::string encoded_str = encode_shift(input_str);
    std::string decoded_str = decode_shift(encoded_str);

    assert(decoded_str == input_str);

    return 0;
}