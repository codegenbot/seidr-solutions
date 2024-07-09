#include <iostream>
#include <string>

std::string string_xor(const std::string &a, const std::string &b) {
    int result = 0;
    for (int i = 0; i < a.length(); i++) {
        if(i >= b.length()) {
            result = (result << 1) | (a[i] - '0');
        } else {
            result = (result << 1) | ((a[i] - '0') ^ (b[i] - '0'));
        }
    }
    return std::to_string(result);
}

int main() {
    std::cout << string_xor("10101010", "11001100") << std::endl;
    return 0;
}