#include <iostream>
#include <string>

std::string string_xor(const std::string &a, const std::string &b) {
    int result = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '1' && b[i] == '1')
            result |= 1 << (7 - i);
        else if (a[i] == '1' || b[i] == '1')
            result ^= 1 << (7 - i);
    }
    return std::bitset<8>(result).to_string();
}

int main() {
    std::cout << string_xor("0101", "0000") << std::endl;
    return 0; 
}