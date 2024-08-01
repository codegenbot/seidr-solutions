#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (!issame(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}