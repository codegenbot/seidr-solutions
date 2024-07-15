#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    std::string word = "";

    for (char c : s) {
        if (c == '-') {
            if (!word.empty()) {
                if (capitalizeNext) {
                    result += toupper(word[0]);
                    word.erase(0, 1);
                    capitalizeNext = false;
                }
                result += word;
                word.clear();
            }
        } else if (capitalizeNext) {
            word += toupper(c);
            capitalizeNext = false;
        } else {
            word += tolower(c);
        }
    }

    if (!word.empty()) {
        if (capitalizeNext) {
            result += toupper(word[0]);
            word.erase(0, 1);
            capitalizeNext = false;
        }
        result += word;
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}