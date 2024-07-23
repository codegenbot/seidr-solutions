#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    bool capitalizeNext = true;

    while (std::getline(ss, word, ' ')) {
        if (!word.empty()) {
            if (capitalizeNext) {
                result += toupper(word[0]);
                capitalizeNext = false;
            } else {
                result += tolower(word);
            }
            if (capitalizeNext && !result.empty())
                result += " ";
            capitalizeNext = true;
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