#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    using std::vector;
    using std::bool;
}

std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> result;
    for (size_t i = 0; i < v.size(); i += 2) {
        result.push_back(v[i]);
    }
    return result;
}

std::bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}