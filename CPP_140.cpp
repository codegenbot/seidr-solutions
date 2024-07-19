#include <iostream>
#include <string>

std::string fix_spaces(const std::string& str) {
    size_t start = 0;
    while (start < str.size() && isspace(str[start])) {
        start++;
    }
    size_t end = str.size();
    while (end > start && isspace(str[end - 1])) {
        end--;
    }
    return str.substr(start, end - start);
}