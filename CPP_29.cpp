```cpp
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    };
}

int main() {
    assert(isSame(filterByPrefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx","xxxAAA","xxx"}));
    return 0;
}