#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    // Remove leading space(s)
    str.erase(0, str.find_first_not_of(' '));

    std::string result = "";
    bool isNextUpper = false;
    for (char c : str) {
        if (c == '-') {
            continue; 
        } else if (c == ' ') {
            if (!isNextUpper) { 
                result += ' ';
            }
            isNextUpper = false;
        } else {
            if (!isNextUpper) {
                if (result.empty()) { 
                    result += std::toupper(c);
                } else {
                    result += c;
                }
                isNextUpper = true;
            } else {
                result += std::tolower(c);
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}