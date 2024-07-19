#include <vector>
#include <string> // Add this line
#include <algorithm> // Add this line

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}