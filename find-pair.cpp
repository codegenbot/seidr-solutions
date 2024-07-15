#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap.insert({nums[i], i});
    }
    return {};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto pair = findPair(nums, target);
    if (!pair.empty()) {
        std::cout << "The pair is: " << pair[0] << ", " << pair[1] << std::endl;
    } else {
        std::cout << "No such pair found." << std::endl;
    }
}