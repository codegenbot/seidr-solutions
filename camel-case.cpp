#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& input) {
    std::string output = "";
    for (char c : input) {
        if (c == '-') {
            output += c + c;
        } else if (output.empty() || output.back() != '-') {
            output += c;
        }
    }
    return output;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamelCase(input) << std::endl;
    return 0;
}