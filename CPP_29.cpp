```cpp
#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_prefix(const std::vector<std::vector<std::string>>& strings, const std::string& prefix) {
    std::vector<std::vector<std::string>> result;
    for (const auto& str : strings) {
        bool found = false;
        std::vector<std::string> newStr;
        for (const auto& s : str) {
            if (s.find(prefix) == 0) {
                newStr.push_back(s);
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(str);
        } else {
            result.push_back(newStr);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    auto result = filter_by_prefix({strings}, "xxx");
    return issame(result, {{"xxx"}, {"xxxAAA"}, {"xxx"}});
}