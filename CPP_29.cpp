```cpp
#include <algorithm>
#include <string>
#include <vector>

bool areSame(const std::vector<std::string>& a) {
    return (a.size() == 1);
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(areSame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx")) 
           == std::vector<std::string>({"xxx", "xxxA", "xxx"}));
    return 0;
}