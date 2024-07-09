```cpp
#include <algorithm>
#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a) {
    return std::all_of(a.begin(), a.end(), [](const auto& str) { return str == a[0]; });
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}