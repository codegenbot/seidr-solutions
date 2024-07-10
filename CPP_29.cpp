#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"code", "coding", "problem", "contest"};
    std::string pref = "cod";
    std::vector<std::string> filtered = filter_by_prefix(words, pref);

    for (const auto& word : filtered) {
        std::cout << word << " ";
    }

    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));

    return 0;
}