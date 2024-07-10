#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& a, const std::string& prefix) {
    std::vector<std::string> filtered_strings;
    for (const std::string& str : a) {
        if (str.find(prefix) == 0) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    assert(issame(filter_by_prefix({"xxx", "xxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));

    return 0;
}