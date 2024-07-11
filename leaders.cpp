#include <vector>

vector<int> findLeaders(vector<int> nums) {
    int n = nums.size();
    vector<int> leaders;
    int maxRight = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(nums[i]);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}