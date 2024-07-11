#include <vector>
#include <climits>
#include <algorithm>

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = std::numeric_limits<int>::min();
    
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}