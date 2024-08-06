#include <string>

std::string str = "";
char chr = 'a';
str += chr;
std::string encode_cyclic(const std::string& input); 
std::string decode_cyclic(const std::string& encoded_str); 
std::string encoded_str = encode_cyclic(str);
assert(decode_cyclic(encoded_str) == str);