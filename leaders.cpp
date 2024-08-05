#include <vector>

vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int maxRight = nums.back();
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}