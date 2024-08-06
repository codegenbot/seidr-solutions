#include <string>
#include <cassert>

std::string str = "";
char chr = 'a'; // example character
str += chr;
std::string encoded_str = encode_cyclic(str);
assert(decode_cyclic(encoded_str) == str);