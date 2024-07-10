#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

int vowels_count(std::string s) {
    return std::count_if(s.begin(), s.end(), [](char c) {
        char low = std::tolower(c);
        return low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u';
    });
}