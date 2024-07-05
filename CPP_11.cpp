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
    std::string a, b;
    std::cin >> a >> b;
    std::cout << string_xor(a, b) << std::endl;
    return 0;
}