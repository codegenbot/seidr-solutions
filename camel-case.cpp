```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = str[0] != '-';

    for (char c : str.substr(1)) { 
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;

    return 0;
}