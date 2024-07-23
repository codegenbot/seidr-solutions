#include <string>

std::string remove_vowels(std::string text){
    std::string result;
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!strchr("aeiouAEIOU", tolower(c))) {
            result += c;
        }
    }
    return result;
}