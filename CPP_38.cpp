#include <string>
#include <cassert>

std::string str = ""; 
char chr = 'a'; 
str += chr; 
std::string encode_cyclic(std::string str);
std::string decode_cyclic(std::string str);
std::string encoded_str = encode_cyclic(str); 
assert(decode_cyclic(encoded_str) == str);