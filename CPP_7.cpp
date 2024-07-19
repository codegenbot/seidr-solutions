#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

void filter_by_substring(std::vector<std::string>& vec, const std::string& substr);