#include <initializer_list>
#include <vector>
#include <string>
#include <iostream>

bool issame(std::vector<std::string> a, const std::string& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b.substr(i, 1)) return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& s) {
    std::vector<std::string> result;
    for (int i = 0; i <= s.size(); i++) {
        result.push_back(s.substr(0, i));
    }
    return result;
}