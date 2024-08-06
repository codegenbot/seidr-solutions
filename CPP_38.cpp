#include <string>
#include <cassert>

std::string str = ""; 
char chr = 'a'; 
str += chr; 
std::string encode_cyclic(std::string str){
    // Your implementation for encode_cyclic
}
std::string decode_cyclic(std::string str){
    // Your implementation for decode_cyclic
}
std::string encoded_str = encode_cyclic(str); 
assert(decode_cyclic(encoded_str) == str);