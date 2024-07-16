#include <vector>
#include <utility>
#include <numeric>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> findCutSpot(const std::vector<int>& nums) {
    int minDiff = std::numeric_limits<int>::max();
    int cutIndex = -1;

    int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + cutIndex + 1), 
                          std::vector<int>(nums.begin() + cutIndex + 1, nums.end()));
}