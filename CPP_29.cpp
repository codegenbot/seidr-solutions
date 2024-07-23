```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::initializer_list<std::string>& a, const std::initializer_list<std::string>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    if (!issame({"xxx", "xxxAAA", "xxx"}, filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"))) {
        return 1;
    }
    return 0;
}