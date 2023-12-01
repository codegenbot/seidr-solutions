#include <vector>
#include <utility>
#include <climits>
#include <cstdlib>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = std::numeric_limits<int>::max();
    int index = 0;

    if (n == 1) {
        return std::make_pair(nums, std::vector<int>());
    }

    for (int i = 0; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }

        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }

        int currentDiff = std::abs(leftSum - rightSum);

        if (currentDiff < diff || (currentDiff == diff && i < index)) {
            diff = currentDiff;
            index = i;
        }
    }

    std::vector<int> leftSubvector(nums.begin(), nums.begin() + index + 1);
    std::vector<int> rightSubvector(nums.begin() + index + 1, nums.end());

    return std::make_pair(leftSubvector, rightSubvector);
}