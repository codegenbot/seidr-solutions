#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>

int vowels_count(const std::string& s) {
    return std::count_if(s.begin(), s.end(), [](char c) {
        char low = std::tolower(c);
        return low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u' ||
               low == 'A' || low == 'E' || low == 'I' || low == 'O' || low == 'U';
    });
}