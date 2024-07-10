#include <vector>
#include <cassert>

namespace cpp9 {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> rolling_max(const std::vector<int>& nums) {
        std::vector<int> result;
        int max_num = nums[0];
        for (int i = 0; i < nums.size(); ++i) {
            max_num = std::max(max_num, nums[i]);
            result.push_back(max_num);
        }
        return result;
    }
}

int main() {
    assert(cpp9::issame(cpp9::rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}