#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    if (str.empty()) return "";
    
    std::string result;
    bool capitalizeNext = true;
    
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (c == ' ') {
            continue;
        } else {
            if (capitalizeNext) {
                result += char(toupper(c));
                capitalizeNext = false;
            } else {
                result += char(tolower(c));
            }
        }
    }
    
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;  // nospaceordash
    std::cout << camelCase("two-words") << std::endl;     // twoWords
    std::cout << camelCase("two words") << std::endl;      // two words
    std::cout << camelCase("all separate words") << std::endl;  // all separate words
    
    return 0;
}