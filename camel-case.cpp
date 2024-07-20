```cpp
#include <iostream>
#include <cctype>
#include <string>

std::string camelCase(std::string str) {
    std::string result;
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            inWord = true;
        } else if (inWord) {
            result += std::toupper(c);
            inWord = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str).erase(str.find_last_not_of("\n") + 1);

    std::cout << "Camel case output: " << camelCase(str) << std::endl;

    return 0;
}