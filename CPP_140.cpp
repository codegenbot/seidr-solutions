#include <string>
#include <iostream>

std::string fix_spaces(const std::string& text) {
    std::string result = "";
    for (char c : text) { 
        if (c == ' ') {
            if (!result.empty() && result.back() != ' ') {
                result += "%20";
            }
        } else {
            result += c;
        }
    }
    return result; // Return by value
}

std::cout << fix_spaces("   Exa 1 2 2 mple");