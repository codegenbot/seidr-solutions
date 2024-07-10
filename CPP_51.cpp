#include <algorithm>
#include <string>
#include <cctype>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) { return std::isalpha(c) && std::isvowel(std::tolower(c)); }), text.end());
    return text;
}