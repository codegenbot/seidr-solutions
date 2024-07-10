#include <algorithm>
#include <string>
#include <iostream>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [&text](char c) { return std::string("aeiouAEIOU").find(c) != std::string::npos; }), text.end());
    return text;
}