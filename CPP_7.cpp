#include <iostream>
#include <vector>
#include <cassert>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> filtered_strings;
    for (const std::string& str : strings) {
        if (str.find(substring) != std::string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // Add other test cases and function calls here
    
    return 0;
}