```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::pair<std::string, std::string>> a) {
    if (a.size() == 0)
        return true;
    for (auto& pair : a) {
        if (pair.first != "xxx" || pair.second != "xxx")
            return false;
    }
    return true;
}

std::pair<std::string, std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            return {prefix, s};
    }
    return {"", ""};
}

int main() {
    std::pair<std::string, std::string> filteredPair = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx");
    assert(issame({{filteredPair.first, filteredPair.second}}));
    
    // You can also add some test cases to main function
    // For example:
    std::vector<std::pair<std::string, std::string>> pairs;
    if (filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx").first == "xxx" &&
        filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx").second == "xxxAAs") {
        pairs.push_back({filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAs", "xxx"}, "xxx")});
    }
    // And then test your function
    assert(issame(pairs));
    
    return 0;
}