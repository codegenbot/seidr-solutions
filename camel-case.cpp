#include <vector>
#include <iostream>
#include <string>

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
            if (!str.empty()) {
                std::cout << camelCase(word[0] ? tolower(word[0]) : "") << " ";
            }
            str.erase(0, word.length() + 1);
        }
        std::cout << std::endl;
    }
    return 0;
}