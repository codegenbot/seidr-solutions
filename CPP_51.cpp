#include <string>
#include <cctype>

std::string remove_vowels(std::string text){
    std::string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isalpha(c) || tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
            result += c;
        }
    }
    return result;
}