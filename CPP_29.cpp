```
#include <vector>
#include <string>

bool areEqual(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}