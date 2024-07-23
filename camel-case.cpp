#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
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
    std::cin >> str;
    std::cout << kebabToCamel(str) << std::endl;

    return 0;
}