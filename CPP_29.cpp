```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<std::string>> strings = {{"xxx"},{"asd"},{"xxy"}, {"john doe" }, {"xxxxAAA"}, {"xxx"}};
    assert(issame(filter_by_prefix(strings, "xxx"), {{"xxx"},{"xxxAAA"},{"xxx"}}));
    return 0;
}