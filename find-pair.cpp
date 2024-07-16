#include <vector>
#include <iostream>
#include <unordered_map>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::vector<int> result;
    std::unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(nums[i]); // Modified line
            result.push_back(complement); // Modified line
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int target;
    std::cin >> target;

    std::vector<int> result = findPair(nums, target);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}