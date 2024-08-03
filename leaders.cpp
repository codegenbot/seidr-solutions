#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    vector<int> leaders;
    
    for (int i = n - 1; i >= 0; --i) {
        bool leader = true;
        for (int j = i + 1; j < n; ++j)
            if (nums[j] >= nums[i])
                leader = false;
        if (leader)
            leaders.push_back(nums[i]);
    }
    
    return leaders;
}