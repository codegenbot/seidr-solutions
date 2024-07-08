#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::basic_string<char>>& a, const std::vector<std::string>& b) {
    bool bDecl = false;
    std::vector<std::string> bTemp;
    if (bDecl) {
        for (const auto& s : a) {
            bTemp.push_back(s);
        }
        b = bTemp;
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