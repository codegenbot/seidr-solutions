#include <iostream>
#include <vector>

std::vector<int> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    int halfSum = sum / 2;
    int currentSum = 0;
    int cutIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];
        if (currentSum >= halfSum) {
            cutIndex = i;
            break;
        }
    }
    std::vector<int> subVector1(nums.begin(), nums.begin() + cutIndex + 1);
    std::vector<int> subVector2(nums.begin() + cutIndex + 1, nums.end());
    return {subVector1, subVector2};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::vector<int> subVector1, subVector2;
    std::tie(subVector1, subVector2) = cutVector(nums);
    for (int num : subVector1) {
        std::cout << num << std::endl;
    }
    for (int num : subVector2) {
        std::cout << num << std::endl;
    }
    return 0;
}