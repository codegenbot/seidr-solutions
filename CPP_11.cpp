#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    std::string result;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    std::cout << string_xor("0101", "0000") << std::endl;

    return 0;
}