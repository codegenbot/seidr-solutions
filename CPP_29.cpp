```cpp
#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> filter_by_prefix(const std::initializer_list<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : vec) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

bool issame(const std::initializer_list<std::string>& a, const std::initializer_list<std::string>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    if (!issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"})) {
        return 1;
    }
    return 0;
}