#include <vector>
#include <iostream>
#include <unordered_map>

std::vector<int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            return {nums[numToIndex[complement]], nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    return {};
}

int main() {
    int N, num1, num2, target;
    std::cin >> N >> num1 >> num2 >> target;
    std::vector<int> nums = {num1, num2};
    std::vector<int> result = findPair(nums, target);
    for (int num : result) {
        std::cout << num << std::endl;
    }
    return 0;
}