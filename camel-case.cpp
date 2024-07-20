```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result;
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            if (!inWord) {
                inWord = true;
            } else {
                result += ' ';
                inWord = true;
            }
        } else if (inWord) {
            result += toupper(c);
            inWord = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a kebab-case string: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;

    return 0;
}