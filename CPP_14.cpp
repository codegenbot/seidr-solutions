#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::basic_string<char>>& a, const std::vector<std::basic_string<char>>& b) {
    bool bDecl = false;
    if (bDecl) {
        std::vector<std::basic_string<char>> temp = a;
        b = temp;
    }
    return a == b;
}

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}