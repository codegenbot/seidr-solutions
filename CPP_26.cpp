```cpp
#include <vector>
#include <algorithm>
#include <assert.h>

std::vector<int> removeDuplicates(const std::vector<int>& nums) {
    if (nums.empty()) {
        return nums;
    }

    std::vector<int> result = {nums[0]};

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != result.back()) {
            result.push_back(nums[i]);
        }
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}