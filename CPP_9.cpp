#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

void rolling_max(std::vector<int>& nums);

int main() {
    std::vector<int> nums = {3, 2, 3, 100, 3};
    rolling_max(nums);
    assert(issame(nums, {3, 3, 3, 100, 100}));
    return 0;
}