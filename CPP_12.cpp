#include <vector>
#include <string>
#include <initializer_list>

std::string longest(const std::vector<std::string>& strings) {
    std::string result = strings[0];
    for (const auto& s : strings) {
        if (s.length() > result.length()) {
            result = s;
        }
}