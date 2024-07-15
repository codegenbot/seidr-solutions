#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        std::string word;
        while (std::getline(iss, word, '-')) {
            if (!word.empty()) {
                if (input.find(word) == 0)
                    result = toupper(word[0]) + word.substr(1).tolower();
                else
                    result += word[0] + word.substr(1).tolower();
            }
            std::cout << kebabToCamel(result) << " ";
        }
    }
    return 0;
}