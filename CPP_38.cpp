#include <string>
#include <cassert>

std::string encode_cyclic(const std::string &str) {
    return str + str; // Return double of input string
}

std::string decode_cyclic(const std::string &str) {
    return str.substr(0, str.size() / 2); // Return the first half of input string
}

int main() {
    std::string str = "";
    char chr = 'a';
    str += chr;
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
}