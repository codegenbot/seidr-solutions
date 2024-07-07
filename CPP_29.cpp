```cpp
#include <vector>
#include <string>
#include <algorithm>

namespace {
std::vector<std::string> filter_by_prefix(std::vector<std::string> a, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : a) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    for (const auto& s : a) {
        if (std::find(b.begin(), b.end(), s) == b.end())
            return false;
    }
    return true;
}
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}