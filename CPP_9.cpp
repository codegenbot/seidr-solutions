#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> rolling_max(const std::vector<int>& v) {
    std::vector<int> result;
    for (size_t i = 0; i < v.size(); ++i) {
        int max_val = v[i];
        for (size_t j = i + 1; j < v.size(); ++j) {
            max_val = std::max(max_val, v[j]);
        }
        result.push_back(max_val);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}