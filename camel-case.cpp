#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // skip the dash
            while (i < str.length() && str[i] == ' ') {
                i++; // skip spaces
            }
            if (!result.empty()) {
                result += std::toupper(str[i]);
            } else {
                result += str[i];
            }
        } else if (!result.empty() && !std::isalpha(str[i])) {
            continue; // ignore non-alphabets
        } else {
            if (std::isupper(str[i])) {
                result += std::string(1, tolower(str[i]));
            } else {
                result += str[i];
            }
        }
    }
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl; // nospaceordash
    std::cout << camelCase("two-words") << std::endl; // twoWords
    std::cout << camelCase("two words") << std::endl; // two words
    std::cout << camelCase("all separate words") << std::endl; // all separate words
    return 0;
}