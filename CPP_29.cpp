#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (std::tolower(s1[i]) != std::tolower(s2[i])) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0 && issame(str.substr(0, prefix.length()), prefix)) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"});
    std::vector<std::string> result = filter_by_prefix(strings, "xxx");
    assert(result == std::vector<std::string>{"xxx", "xxx", "xxx"}); 
    return 0;
}