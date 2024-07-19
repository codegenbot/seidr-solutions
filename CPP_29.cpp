#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using string = std::string;

bool issame(const std::vector<string>& a, const std::vector<string>& b) {
    return a == b;
}

std::vector<string> filter_by_prefix(const std::vector<string>& strings, const string& prefix){
    std::vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    std::vector<string> filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }

    return 0;
}