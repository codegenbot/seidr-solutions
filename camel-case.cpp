#include <iostream>
#include <string>

std::string zeroExtendToCamel() const {
    if (temp.empty()) return temp;
    if (isupper(temp[0]))
        return temp;
    return std::string(1, toupper(temp[0])) + std::string(temp).substr(1);
}

std::string kebabToCamel(const std::string& s) {
    std::string result = "";
    std::string temp = "";

    for (char c : s + " ") {
        if (c == '-' || c == ' ') {
            if (!temp.empty()) {
                result += zeroExtendToCamel();
                temp = "";
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        result += zeroExtendToCamel();
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The equivalent camelCase is: " << kebabToCamel(input) << std::endl;
    return 0;