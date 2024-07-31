#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::set<int>(a.begin(), a.end()) == std::set<int>(b.begin(), b.end());
}