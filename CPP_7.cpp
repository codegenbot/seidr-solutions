#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substr) {
    std::vector<std::string> result;

    for (const auto& str : strings) {
        if (str.find(substr) != std::string::npos) {
            result.push_back(str);
        }
    }

    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), std::vector<std::string>{"grunt", "prune"}));
    
    return 0;
}