#include <string>
#include <cassert>

std::string str = "a"; 
std::string encode_cyclic(std::string str) {
    std::string encoded_str = str;
    for (char& c : encoded_str) {
        c = (c == 'z') ? 'a' : c + 1;
    }
    return encoded_str;
}
std::string decode_cyclic(std::string str) {
    std::string decoded_str = str;
    for (char& c : decoded_str) {
        c = (c == 'a') ? 'z' : c - 1;
    }
    return decoded_str;
}
std::string encoded_str = encode_cyclic(str); 
assert(decode_cyclic(encoded_str) == str);