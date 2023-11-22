#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;

    // Find the index where the difference between the sums of the two subvectors is minimum
    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += nums[j];
        }
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Create the two subvectors
    std::vector<int> subvector1(nums.begin(), nums.begin() + cutIndex);
    std::vector<int> subvector2(nums.begin() + cutIndex, nums.end());

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

    // Print the two resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}