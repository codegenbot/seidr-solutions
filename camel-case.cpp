#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    bool capitalizeNext = true;

    while (ss >> word) {
        if (!result.empty()) {
            result += toupper(word[0]);
            word.erase(0, 1);
        }
        for (char c : word) {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
        result += " ";
    }

    return result.substr(0, result.size() - 1); // Remove the trailing space
}

int main() {
    std::string str;
    while (getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}