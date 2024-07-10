#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    auto result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    assert(result == std::vector<std::string>{"xxx", "xxxAAA", "xxx"});
}