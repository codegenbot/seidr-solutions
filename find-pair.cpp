#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    std::vector<std::pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int j = std::lower_bound(nums.begin() + i, nums.end(), target - nums[i]) - nums.begin();
        
        if (j != nums.size() && nums[i] + nums[j] == target) {
            result.push_back({std::min(nums[i], nums[j]), std::max(nums[i], nums[j])});
        }
    }
    
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::vector<std::pair<int, int>> result = findPairs(nums, target);
    // print or use result as needed
    return 0;
}