#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result;
    
    // The last element of the array is always a leader.
    if (n > 0) {
        result.push_back(nums[n - 1]);
    }
    
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= nums[i + 1]) {
            result.push_back(nums[i]);
        }
    }
    
    std::reverse(result.begin(), result.end());
    
    return result;
}