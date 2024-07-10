#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            c = ' ';
        }
    }
    std::string temp = "";
    for (char c : s) {
        if (c == ' ') {
            result += std::toupper(temp[0]);
            temp = "";
        } else {
            temp += c;
        }
    }
    if (!temp.empty()) {
        result += std::toupper(temp[0]);
        result += temp.substr(1);
    } else {
        result = s;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << camelCase(input) << std::endl;
    return 0;
}