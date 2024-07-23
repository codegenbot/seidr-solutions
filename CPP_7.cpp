#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> separate_variable) {
    if (a.size() != separate_variable.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!std::includes(separate_variable.begin(), separate_variable.end(), a[i].begin(), a[i].end())) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;