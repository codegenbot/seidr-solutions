#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    if(a.length() != b.length()) {
        throw std::invalid_argument("Input strings must be of the same length");
    }
    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        int xoredValue = (a[i] - '0') ^ (b[i] - '0');
        if(xoredValue) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}