#include <string>

std::string str = "";
char chr = 'a'; 
str += chr;
std::string encode_cyclic(const std::string& input) {
    // Implementation for encode_cyclic function
}

std::string decode_cyclic(const std::string& encoded_str) {
    // Implementation for decode_cyclic function
}

std::string encoded_str = encode_cyclic(str);
assert(decode_cyclic(encoded_str) == str);