#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    // Calculate the total sum of the vector
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    // Iterate through each index and calculate the difference between the sums of the two subvectors
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum;
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
        leftSum += nums[i];
    }

    // Create the two subvectors based on the cut index
    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());

    return std::make_pair(subvector1, subvector2);
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