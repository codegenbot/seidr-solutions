#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& vec, const std::string& substr) {
    std::vector<std::string> result;
    for (const std::string& str : vec) {
        if (str.find(substr) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> vec = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> expected = {"grunt", "prune"};
    vec = filter_by_substring(vec, "run");
    assert(issame(vec, expected));
    return 0;
}