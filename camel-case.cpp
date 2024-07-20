#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& str) {
    std::string result;
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
    while (std::getline(std::cin, str)) {
        std::stringstream ss(str);
        std::string word;
        std::cout << camelCase();
        while (std::getline(ss, word, ' ')) {
            std::cout << camelCase(word) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}