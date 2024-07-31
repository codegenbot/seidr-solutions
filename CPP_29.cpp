#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == std::vector<std::string>{"xxx", "xxxAAA", "xxx"});
    return 0;
}