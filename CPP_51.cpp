#include <string>
#include <cctype>

std::string remove_vowels(const std::string& text) {
    std::string result;
    for (char c : text) {
        if (!std::isspace(c)) {  
            c = std::tolower(c);  
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                result += c;  
            }
        }
    }
    return result;
}