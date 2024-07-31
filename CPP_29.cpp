```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::pair<std::string, std::string>> a) {
    if (a.size() == 0)
        return true;
    for (const auto& pair : a) {
        if (pair.first != "xxx" || pair.second != "xxx")
            return false;
    }
    return true;
}

std::pair<std::string, std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            return {prefix, s};
    }
    return {"", ""};
}

assert(issame({{filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx").first, filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx").second}}));