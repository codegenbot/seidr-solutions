#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

namespace contest {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool contest::issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    std::vector<std::string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    assert(contest::issame(result, expected));
    return 0;
}