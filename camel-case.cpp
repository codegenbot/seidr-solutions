#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    if (str.empty()) return str;
    
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
        std::cout << "Enter a string in kebab-case (or 'quit' to stop): ";
        std::cin >> str;

        if (str == "quit") break;

        std::cout << "camelCase: " << camelCase(str) << std::endl;
    }

    return 0;
}