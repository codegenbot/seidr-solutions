#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> pluck(std::vector<int> nums) {
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            result.push_back(nums[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {7, 9, 7, 1}));
    
    return 0;
}