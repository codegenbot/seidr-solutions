#include <vector>
#include <cassert>

bool issame(const std::string& str, const std::string& substring) {
    return str.find(substring) != std::string::npos;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (issame(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}