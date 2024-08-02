#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    
    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result += toupper(str[str.find(c) + 1]);
            }
        } else if (!result.empty() && capitalizeNext) {
            result += tolower(c);
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
                capitalizeNext = true;
            }
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}