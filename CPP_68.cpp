#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> result;
    for (size_t i = 0; i < v.size(); i += 2) {
        result.push_back(v[i]);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}