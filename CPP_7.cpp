#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& arr, const std::string& substr) {
    std::vector<std::string> result;
    for (const auto& str : arr) {
        if (str.find(substr) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"});)

    std::cout << "Test passed successfully!" << std::endl;

    return 0;
}