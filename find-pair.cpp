```c++
#include <cstddef>
#include <utility>
#include <vector>
#include <unordered_map>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {std::min(nums[i], complement), std::max(nums[i], complement)};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {10, 2, 5, 3};
    int target = 7;
    std::pair<int, int> pair = findPair(nums, target);
    if (pair.first == -1 && pair.second == -1) {
        std::cout << "No such pair found." << std::endl;
    } else {
        std::cout << "The pair is: " << pair.first << ", " << pair.second << std::endl;
    }
}