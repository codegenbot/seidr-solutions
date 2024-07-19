#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto &str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}