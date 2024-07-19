#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> rolling_max(const std::vector<int>& nums) {
    std::vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i) {
        int max_val = nums[i];
        for (size_t j = i + 1; j < nums.size(); ++j) {
            max_val = std::max(max_val, nums[j]);
        }
        result.push_back(max_val);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    return 0;
}