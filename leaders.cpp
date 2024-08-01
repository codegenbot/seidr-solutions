#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i]; // update maxRight
        }
    }
    
    leaders.push_back(nums[n-1]); // add the rightmost element as a leader
    return leaders;
}