#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    vector<int> leaders;
    for (int i = n - 1; i >= 0; --i) {
        bool isLeader = true;
        for (int j = i + 1; j < n; ++j) {
            if (nums[j] >= nums[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) leaders.push_back(nums[i]);
    }
    return leaders;
}