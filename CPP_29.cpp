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

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::vector<std::string> vec = {std::string("xxx"), std::string("asd"), std::string("xxy"), std::string("john doe"), std::string("xxxA"), std::string("xxx")};
    assert(issame(filter_by_prefix(vec, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}