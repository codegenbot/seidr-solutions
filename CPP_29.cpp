#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::pair<std::string, std::string>> a) {
    if (a.size() == 0)
        return true;
    for (const auto& pair : a) {
        if (pair.first != "xxx" || pair.second != "xxx")
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> filteredStrings;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            filteredStrings.push_back(s);
    }
    return filteredStrings;
}

int main() {
    std::vector<std::pair<std::string, std::string>> a = {{"xxx", "xxx"}, {"xxxxAA", "xxxAAA"}};
    assert(issame(a));
    std::vector<std::string> strings = {"hello", "hell", "world"};
    std::vector<std::string> filteredStrings = filter_by_prefix(strings, "hel");
    for (const auto& s : filteredStrings) {
        std::cout << s << std::endl;
    }
    return 0;
}