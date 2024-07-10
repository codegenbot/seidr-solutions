#include <vector>
#include <cassert>

namespace cpp9 {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> rolling_max(const std::vector<int>& nums) {
        std::vector<int> result;
        for (size_t i = 0; i < nums.size(); ++i) {
            int max_val = nums[i];
            for (size_t j = i; j < nums.size(); ++j) {
                max_val = std::max(max_val, nums[j]);
            }
            result.push_back(max_val);
        }
        return result;
    }
}

int main() {
    assert(cpp9::issame(cpp9::rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}