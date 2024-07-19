#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "";
    }
    std::string result = strings[0];
    for (const auto& str : strings) {
        if (str.length() > result.length()) {
            result = str;
        }
    }
    return result;
}