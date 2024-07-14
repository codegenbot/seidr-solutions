#include <vector>
#include <unordered_map>
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
    nums.push_back(5193); nums.push_back(-9513); nums.push_back(3491); nums.push_back(-9053); nums.push_back(9269); nums.push_back(860);
    int target = 12760;
    auto pair = findPair(nums, target);
    if (pair.first != -1 && pair.second != -1) {
        std::cout << "Found pair: (" << pair.first << ", " << pair.second << ")" << std::endl;
    } else {
        std::cout << "No pair found." << std::endl;
    }
}