```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            result += ' ';  // Add space before capitalizing next character
            capitalizeNext = true;
        } else if (c == ' ') {  // Reset capitalizeNext after processing each word
            capitalizeNext = false;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
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