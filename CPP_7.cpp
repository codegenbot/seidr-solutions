#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}