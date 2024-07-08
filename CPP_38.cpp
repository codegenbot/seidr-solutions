#include <iostream>
#include <string>
#include <cassert>

std::string encode_cyclic(std::string s) {
    int l = s.length();
    std::string encoded_str;
    
    for (int i = 0; i * 3 < l; i++) {
        std::string x = s.substr(i * 3, 3);
        
        if (x.length() == 3) {
            x = x[1] + x[2] + x[0];
        }
        
        encoded_str.append(x);
    }
    
    return encoded_str;
}

std::string decode_cyclic(std::string s) {
    int l = s.length();
    std::string decoded_str;
    
    for (int i = 0; i * 3 < l; i++) {
        std::string x = s.substr(i * 3, 3);
        
        if (x.length() == 3) {
            x = x[2] + x[0] + x[1];
        }
        
        decoded_str.append(x);
    }
    
    return decoded_str;
}

int main() {
    std::string s = "abcde";
    std::string encoded_str = encode_cyclic(s);
    std::string decoded_str = decode_cyclic(encoded_str);
    assert(decoded_str == s);
    std::cout << "Original: " << s << std::endl;
    std::cout << "Encoded: " << encoded_str << std::endl;
    std::cout << "Decoded: " << decoded_str << std::endl;

    return 0;
}