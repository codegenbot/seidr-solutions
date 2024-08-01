#include <iostream>
#include <string>
#include <cassert>

std::string encode_cyclic(std::string s) {
    int l = s.length();
    std::string output;
    int i;
    for (i = 0; i < l; i += 3) {
        std::string x = s.substr(i, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

std::string decode_cyclic(std::string s) {
    int l = s.length();
    std::string output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        std::string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    std::string str = "input_string";
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    
    return 0;
}