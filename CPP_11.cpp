#include <iostream>
#include <string>

int string_xor(const std::string &a, const std::string &b) {
    int result = 0;
    for (int i = 0; i < a.length(); i++) {
        result = (result << 1) | ((a[i] - '0') ^ (b[i] - '0'));
    }
    return result;
}

int main() {
    std::cout << string_xor("0101", "0000") << std::endl;
    return 0;
}