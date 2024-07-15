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
                    word = tolower(substr(word, 1));
                } else {
                    result += word;
                }
                word = "";
                capitalizeNext = true;
            }
        } else {
            if (capitalizeNext) {
                word += toupper(c);
                capitalizeNext = false;
            } else {
                word += c;
            }
        }
    }
    
    // Process the last word
    if (!word.empty()) {
        if (capitalizeNext) {
            result += toupper(word[0]);
            word = tolower(substr(word, 1));
        } else {
            result += word;
        }
    } else {
        if (capitalizeNext) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}