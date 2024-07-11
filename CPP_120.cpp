#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> maximum(const std::vector<int>& a, const std::vector<int>& defaultValue) {
    if (a.empty()) {
        return defaultValue;
    }
    return {*std::max_element(a.begin(), a.end())};
}

assert(issame(std::vector<int>({1, 2, 3, -23, 243, -400, 0}), std::vector<int>{}));
assert(maximum({1, 2, 3, -23, 243, -400, 0}, {}));