#include <iostream>
#include <string>

std::string string_xor(const std::string &a, const std::string &b) {
    if (a.empty() || b.empty()) {
        return ""; 
    }
    
    std::string result;
    for (int i = 0; i < a.length(); i++) { 
        int xored = (a[i] - '0') ^ (b[i] - '0');
        result += (xored % 2 == 0 ? "0" : "1");
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}