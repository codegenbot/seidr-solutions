#include <utility>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        
        // Start from the next element instead of i + 1 to ensure we don't miss any pair
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == complement) {
                return {nums[i], nums[j]};
            }
            else if (nums[j] > complement) {
                break;
            }
        }
    };
    
    return {-1, -1};
}