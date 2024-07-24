#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.compare(0, prefix.size(), prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx")
           == std::vector<std::string>{"xxx", "xxxAAA", "xxx"});
    return 0;
}