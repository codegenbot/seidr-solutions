#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    vector<int> leaders;
    
    for (int i = n - 1; i >= 0; --i) {
        if (i == n - 1 || nums[i] >= nums[i + 1]) {
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}