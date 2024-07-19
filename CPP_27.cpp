#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <cassert>

std::string flip_case(std::string str);

std::string flip_case(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), [](char c) {
        return islower(c) ? toupper(c) : (isupper(c) ? tolower(c) : c);
    });
    return str;
}