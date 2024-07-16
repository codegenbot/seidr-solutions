```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    if (str.empty()) return "";
    result = toupper(str[0]) + tolower(str.substr(1));
    bool capitalizeNext = true;

    for (char c : str.substr(1)) { 
        if (c == '-') {
            capitalizeNext = true;
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
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}