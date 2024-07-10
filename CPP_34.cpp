#include <algorithm>
#include <cassert>
#include <vector>

bool removeDuplicates(std::vector<int>& nums) {
    nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
    return nums;
}

int main() {
    std::vector<int> nums = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> expected_result = {0, 2, 3, 5, 9, 123};
    
    removeDuplicates(nums);
    
    assert(std::equal(nums.begin(), nums.end(), expected_result.begin(), expected_result.end()));
}