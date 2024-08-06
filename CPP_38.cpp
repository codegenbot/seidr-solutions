#include <string>
#include <cassert>

std::string encode_cyclic(const std::string &str) {
    std::string encoded_str = str;
    return encoded_str;
}

std::string decode_cyclic(const std::string &str) {
    std::string decoded_str = str;
    return decoded_str;
}

int main() {
    std::string str = "";
    char chr = 'a';
    str += chr;
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
}