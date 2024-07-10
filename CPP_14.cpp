#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec) {
    bool first = true;
    for (const auto& s : vec) {
        if (!first) {
            if (s != vec[0]) return false;
        }
        first = false;
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool same(const std::vector<std::string>& vec) {
    bool first = true;
    for (const auto& s : vec) {
        if (!first) {
            if (s != vec[0]) return false;
        }
        first = false;
    }
    return true;
}

std::vector<std::string> result = all_prefixes(input);
if (same(result)) {
    std::cout << "The prefixes are the same." << std::endl;
} else {
    std::cout << "The prefixes are not the same." << std::endl;
}