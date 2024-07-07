```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool operator==(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
    }
    return true;
}

std::vector<std::string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx");
assert(std::operator==(result, std::vector<std::string> {"xxx", "xxxAAA", "xxx"}));
return 0;