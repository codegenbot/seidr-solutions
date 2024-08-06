#include <string>

std::string str = "";
char chr = 'a';
str += chr;
std::string encoded_str = encode_cyclic(str);
assert(decode_cyclic(encoded_str) == str);