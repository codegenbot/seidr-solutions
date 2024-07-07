#include <string>
#include <cstring>

std::string remove_vowels(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}