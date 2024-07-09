#include <vector>
#include <string>

std::string longest(std::vector<std::string> strings) {
    if (strings.empty()) return "";
    std::string longest = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longest.length()) longest = str;
    }
    return longest;

}