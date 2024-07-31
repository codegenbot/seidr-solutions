#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool std::issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    return 0;
}