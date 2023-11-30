#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    std::pair<std::vector<int>, std::vector<int>> result;
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    int target = sum / 2;
    int prefixSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];
        if (prefixSum == target || (prefixSum < target && prefixSum + nums[i + 1] > target)) {
            result.first = std::vector<int>(nums.begin(), nums.begin() + i + 1);
            result.second = std::vector<int>(nums.begin() + i + 1, nums.end());
            break;
        }
    }
    return result;
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