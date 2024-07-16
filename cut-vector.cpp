#include <vector>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> findCutSpot(const std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;
    for (int num : nums) rightSum += num;
    
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
            cutIndex = i;
        }
    }
    
    return {std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1),
            std::vector<int>(nums.begin() + cutIndex + 1, nums.end())};
}