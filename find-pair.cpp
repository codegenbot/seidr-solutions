#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, bool> numMap;
    std::vector<std::pair<int, int>> result;

    // Sort the array
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {{complement, nums[i]}};
        }
        numMap[nums[i]] = true;
    }

    // If no pair was found that sums up to the target
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {{nums[i], nums[j]}};
            }
        }
    }

    // If no pair was found
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::cout << "Pairs that sum to the target: ";
    for (auto pair : findPairs(nums, target)) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;
    return 0;
}