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
    }
    return result;
}

int main() {
    std::vector<std::string> testVector = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    auto filteredVector = filterByPrefix(testVector, "xxx");
    assert(isSame(filteredVector, {"xxx", "xxxAAA", "xxx"}));
    return 0;
}