#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);
bool is_same_vector(std::vector<std::string> a, std::vector<std::string> b);

int main() {
    assert(is_same_vector(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (auto str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool is_same_vector(std::vector<std::string> a, std::vector<std::string> b) {
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