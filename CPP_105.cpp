#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<std::vector<std::string>> by_length(const std::vector<int>& arr) {