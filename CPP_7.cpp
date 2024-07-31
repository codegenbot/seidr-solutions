#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool is_same(std::vector<std::string> output, std::vector<std::string> expected) {
    return output == expected;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));

    return 0;
}