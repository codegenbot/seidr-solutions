#include <iostream>
#include <string>

std::string string_xor(std::string a, std::string b) {
    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    std::cout << "Enter two strings: ";
    std::string a, b;
    std::cin >> a >> b;
    std::cout << "XOR result: " << string_xor(a, b) << std::endl;
    return 0;
}