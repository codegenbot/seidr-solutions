#include <vector>

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;  // Update initialization
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {  // Change condition to include all elements to the right
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}