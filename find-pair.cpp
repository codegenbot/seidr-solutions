#include <vector>
#include <unordered_map>
#include <initializer_list>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    };
    return std::pair<int, int>(-1, -1);
}

int main() {
    std::vector<int> nums;
    nums.push_back(1); nums.push_back(2); nums.push_back(3); nums.push_back(4); nums.push_back(5);
    int target = 7;
    auto pair = findPair(nums, target);
    if (pair.first != -1 && pair.second != -1) {
        std::cout << "Found pair: (" << pair.first << ", " << pair.second << ")" << std::endl;
    } else {
        std::cout << "No pair found." << std::endl;
    }
    return 0;