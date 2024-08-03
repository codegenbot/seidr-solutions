#include <iostream>
#include <vector>
#include <string>
#include <cassert>

namespace std {
    inline bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
        return a == b;
    }
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (size_t i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}