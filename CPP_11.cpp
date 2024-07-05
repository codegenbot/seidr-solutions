#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    std::string result = "";
    for (size_t i = 0; i < a.size(); ++i) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    return result;
}

int main() {
    std::cout << string_xor("0101", "0000") << std::endl;
    return 0;
}