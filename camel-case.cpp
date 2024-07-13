```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string& str) {
    std::string result = "";
    while (str.length() > 0) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.length();
        }
        result += toupper(str[0]);
        str.erase(0, 1);
        if (pos > 0) {
            result += towlower(str.substr(0, pos - 1));
            str.erase(0, pos - 1);
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