#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (std::string s : strings) {
        if (s.find(prefix) != std::string::npos)
            result.push_back(s);
    }
    return result;
}