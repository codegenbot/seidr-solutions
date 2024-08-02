#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    
    for (char c : str) {
        if (c == '-') {
            result += toupper(str[++str.find(c)]);
            result += c;
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
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}