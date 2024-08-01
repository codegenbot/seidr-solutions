#include <iostream>
#include <string>
#include <cassert>

std::string encode_cyclic(std::string s) {
    int l = s.length();
    std::string output;
    
    for (int i = 0; i < l; i += 3) {
        output += s[i + 2];
        output += s.substr(i, 2);
    }
    
    return output;
}

std::string decode_cyclic(std::string s) {
    int l = s.length();
    std::string output;
    
    for (int i = 0; i < l; i += 3) {
        output += s.substr(i + 1, 2);
        output += s[i];
    }
    
    return output;
}

int main() {
    std::string str = "input_string";
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    
    return 0;
}