#include <algorithm>
#include <string>
#include <vector>

bool sameStrings(const std::vector<std::string>& strings) {
    return std::all_of(strings.begin(), strings.end(), [&strings](const auto& str) {
        return std::any_of(strings.begin(), strings.end(), [&](auto x) { return x == str; });
    });
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
    assert(sameStrings(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx")) 
           == std::vector<std::string>({"xxx", "xxxA", "xxx"}));
    return 0;
}