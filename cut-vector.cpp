#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

std::vector<int> cutVector(std::vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    // Iterate through the vector and find the spot where the difference is minimized
    int diff = std::numeric_limits<int>::max(), cutIndex = -1;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = std::abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> leftSubvector(std::begin(nums), std::begin(nums) + cutIndex + 1);
    std::vector<int> rightSubvector(std::begin(nums) + cutIndex + 1, std::end(nums));

    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> result = cutVector(nums);

    for (auto it = result[0].begin(); it != result[0].end(); it++) {
        std::cout << *it << std::endl;
    }

    for (auto num : result[1]) {
        std::cout << num << std::endl;
    }

    return 0;
}