#include <iostream>
#include <string>
#include <cassert>

std::string decode_cyclic(std::string s) {
    int l = s.length();
    std::string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

std::string encode_cyclic(std::string str) {
    int l = str.length();
    std::string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = str.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1, 2) + x[0];
        output += x;
    }
    return output;
}

int main() {
    std::string str = "SomeTestString";
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    std::cout << "All assertions passed." << std::endl;
    return 0;
}