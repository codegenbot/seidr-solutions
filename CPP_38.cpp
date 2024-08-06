#include <string>
#include <cassert>

std::string str = "";
char chr = 'a';
str += chr;
std::string encode_cyclic(std::string str) {
    // Your implementation for encoding here
}
std::string decode_cyclic(std::string str) {
    // Your implementation for decoding here
}
std::string encoded_str = encode_cyclic(str);
assert(decode_cyclic(encoded_str) == str);