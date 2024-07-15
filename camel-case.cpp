#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;
    
    for (char c : str) {
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
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'q' to quit): ";
        std::cin >> str;
        if (str == "q") break;
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}