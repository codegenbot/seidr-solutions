#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cut_vector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int index = -1;

    // Calculate the total sum of the vector
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    // Calculate the prefix sum of the vector
    std::vector<int> prefixSum(n);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    // Find the index where the difference is minimum
    for (int i = 0; i < n; i++) {
        int leftSum = prefixSum[i];
        int rightSum = totalSum - prefixSum[i];
        int currDiff = abs(leftSum - rightSum);

        if (currDiff < diff) {
            diff = currDiff;
            index = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    std::vector<int> subvector2(nums.begin() + index + 1, nums.end());

    return std::make_pair(subvector1, subvector2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cut_vector(nums);

    for (int num : result.first) {
        std::cout << num << std::endl;
    }

    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}