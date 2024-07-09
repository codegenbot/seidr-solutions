#include <vector>
#include <algorithm>

bool filter_by_substring(const std::vector<std::string>& vec, const std::string& substring) {
    for (const auto& str : vec) {
        if (!str.find(substring)) return false;
    }
    return true;
}

bool issame(vector<string> a, vector<string> b) {
    return filter_by_substring(a, "*") && filter_by_substring(b, "*");
}