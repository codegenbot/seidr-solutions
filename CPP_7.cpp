#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}