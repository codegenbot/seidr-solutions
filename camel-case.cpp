#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    while(std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}