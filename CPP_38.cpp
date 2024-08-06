#include <string>
#include <cassert>

std::string encode_cyclic(std::string str) {
    // implementation for encoding
    return str;
}

std::string decode_cyclic(std::string str) {
    // implementation for decoding
    return str;
}

int main() {
    std::string str = "";
    char chr = 'a';
    str += chr;
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    return 0;
}