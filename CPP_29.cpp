#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
        return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
    }
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
    assert(std::issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}