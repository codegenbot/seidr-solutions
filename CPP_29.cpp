#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const std::string& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == std::vector<std::string>{"xxx", "xxxAAA", "xxx"});
    return 0;
}