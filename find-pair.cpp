#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            return result;
        }
        numIndex[nums[i]] = i;
    }

    return {};  // Empty vector if no pair is found
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

    if (result.empty()) {
        std::cout << "No pair found." << std::endl;
    } else {
        for (int i = 0; i < result.size(); ++i) {
            std::cout << result[i] << std::endl;
        }
    }

    return 0;
}