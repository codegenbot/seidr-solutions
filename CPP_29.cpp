#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>&){
    return a.size() == .size() && std::equal(a.begin(), a.end(), .begin());
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> filtered;
    for (const auto &str : vec) {
        if (str.find(prefix) == 0) {
            filtered.push_back(str);
        }
    }
    return filtered;
}

int main() {
    assert(is_same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"),
                       std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    return 0;
}