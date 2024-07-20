```cpp
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            }
            first = true;
        } else {
            if (first) {
                result += c;
            } else {
                result += char(tolower(c));
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    while (std::getline(std::cin, input)) {
        std::stringstream ss(input);
        std::string word;

        std::cout << "Processing: " << input << std::endl;

        while (std::getline(ss, word, '-')) {
            for(auto & c : word) {
                if(c == ' ') c = '-';
            }
            if (!word.empty()) {
                std::cout << camelCase(word) << ' ';
            }
        }
        std::cout << std::endl;
    }
    return 0;
}