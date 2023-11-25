#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    // Calculate the total sum of the vector
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Calculate the prefix sum of the vector
    std::vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    // Find the cut index where the difference is minimum
    for (int i = 0; i < n; i++) {
        int leftSum = prefixSum[i];
        int rightSum = totalSum - prefixSum[i];
        int currentDiff = abs(leftSum - rightSum);

        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return std::make_pair(leftSubvector, rightSubvector);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}