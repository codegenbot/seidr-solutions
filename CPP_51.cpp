#include <string>
#include <cctype>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (std::tolower(c) != 'a' && std::tolower(c) != 'e' 
                   && std::tolower(c) != 'i' && std::tolower(c) != 'o' 
                   && std::tolower(c) != 'u') {
            result += c;
        }
    }
    return result;
}