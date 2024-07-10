#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> rolling_max(const std::vector<int>& nums) {
    std::vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i) {
        result.push_back(*std::max_element(nums.begin() + i, nums.begin() + std::min(i + 3, nums.size())));
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}