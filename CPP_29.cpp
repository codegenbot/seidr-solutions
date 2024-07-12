```cpp
#include <vector>
#include <string>

bool areEqual(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

int main() {
    std::vector<std::string> input = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    const std::string prefix = "xxx";
    std::vector<std::string> output = filter_by_prefix(input, prefix);
    assert(areEqual(output, {{"xxx"}, {"xxxAAA"}, {"xxx"}}));
    return 0;
}