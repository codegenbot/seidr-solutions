#include <vector>
#include <string>

bool issame(const std::string &s1, const std::string &s2) {
    return s1 == s2;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string> &strings, const std::string &prefix){
    std::vector<std::string> result;
    for (const std::string& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}