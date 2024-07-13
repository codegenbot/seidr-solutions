#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::istringstream iss(str);
    std::string word;

    std::string result = "";
    bool capitalizeNext = false;

    while (getline(iss, word, ' ')) {
        if (!word.empty()) {
            if (capitalizeNext) {
                result += std::toupper(word[0]);
                for (int i = 1; i < word.length(); i++) {
                    result += std::tolower((char)(word[i]));
                }
            } else {
                result += word;
            }
            capitalizeNext = !word.empty() && word[0] == '-';
        } else if (!capitalizeNext) {
            capitalizeNext = true;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}