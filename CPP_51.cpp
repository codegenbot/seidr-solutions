#include <algorithm>
#include <string>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) { return std::string("aeiouAEIOU").find(c) != std::string::npos; }), text.end());
    return text;
}