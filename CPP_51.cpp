#include <string>
#include <cctype>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!ispunct(c) && !isupper(c) && !islower(c))
            continue;
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
            result += c;
    }
    return result;
}