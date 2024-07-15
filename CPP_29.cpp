#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

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
    assert(std::equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx").begin(),
                      filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx").end(),
                      std::vector<std::string>{"xxx", "xxxAAA", "xxx"}.begin()));
    return 0;
}