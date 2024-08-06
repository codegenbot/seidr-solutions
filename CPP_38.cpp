#include <string>
#include <cassert>

std::string encode_cyclic(const std::string &str) {
    std::string encoded_str = str;
    encoded_str += str[0];
    return encoded_str;
}

std::string decode_cyclic(const std::string &str) {
    return str.substr(0, str.length() - 1);
}

int main() {
    std::string str = "";
    char chr = 'a';
    str += chr;

    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
}