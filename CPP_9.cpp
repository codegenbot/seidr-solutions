#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> rolling_max(const std::vector<int>& input) {
    std::vector<int> result(input.size());
    int max_val = input[0];
    for (size_t i = 0; i < input.size(); ++i) {
        max_val = std::max(max_val, input[i]);
        result[i] = max_val;
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));