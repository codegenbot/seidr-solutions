#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int target = sum / 2;
    int currentSum = 0;
    int i = 0;
    for (; i < nums.size(); i++) {
        currentSum += nums[i];
        if (currentSum >= target) {
            break;
        }
    }

    std::vector<int> subvector1(nums.begin(), nums.begin() + i + 1);
    std::vector<int> subvector2(nums.begin() + i + 1, nums.end());

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