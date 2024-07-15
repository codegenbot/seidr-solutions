#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> pluck(const std::vector<int>& v) {
    std::vector<int> result;
    for (size_t i = 0; i < v.size(); i += 2) {
        result.push_back(v[i]);
    }
    return result;
}