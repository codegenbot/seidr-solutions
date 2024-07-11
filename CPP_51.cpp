std::string remove_vowels(std::string text){
    std::string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", tolower(c)) != nullptr) {
            result += c;
        }
    }
    return result;
}

#include <string>
#include <cctype>