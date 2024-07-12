#include <iostream>
#include <algorithm>
#include <string>

std::string remove_vowels(const std::string& text) {
    std::string modified_text = text;
    modified_text.erase(std::remove_if(modified_text.begin(), modified_text.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }), modified_text.end());
    return modified_text;
}