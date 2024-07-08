#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a) {
    for (const auto& s : a) {
        if (!s.empty()) {
            return false;
        }
    };
    return true;
}

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    };
    return result;
}