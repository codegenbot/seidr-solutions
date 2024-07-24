#include <cctype>
#include <cassert>
#include <string>
#include <iostream>

bool check_if_last_char_is_a_letter(const std::string& str) {
    if (str.empty()) return false;
    char lastChar = str.back();
    return std::isalpha(lastChar);
}

size_t pos = std::distance(input.begin(), std::find_if(input.begin(), input.end(), [](char c){return !std::isspace(c);}));