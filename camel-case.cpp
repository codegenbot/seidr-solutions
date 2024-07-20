#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result;
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            result += ' ';
            inWord = true;
        } else if (inWord) {
            result += toupper(c);
            inWord = false;
        } else {
            result += tolower(c);
        }
    }

    // Remove the leading space
    if (!result.empty()) {
        result[0] = toupper(result[0]);
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;

    return 0;
}