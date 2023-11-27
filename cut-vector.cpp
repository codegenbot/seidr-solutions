#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int minDiff = std::numeric_limits<int>::max();
    int cutIndex = -1;

    // Find the spot where the difference is as small as possible
    for (int i = 0; i < nums.size() - 1; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += nums[j];
        }
        for (int j = i + 1; j < nums.size(); j++) {
            sum2 += nums[j];
        }
        int diff = std::abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    std::vector<int> subVec1(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> subVec2(nums.begin() + cutIndex + 1, nums.end());

    return std::make_pair(subVec1, subVec2);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);

    // Output the resulting subvectors
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    for (int num : result.second) {
        std::cout << num << std::endl;
    }

    return 0;
}