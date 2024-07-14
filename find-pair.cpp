```cpp
#include <vector>
#include <unordered_map>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return std::make_pair(num, complement);
        }
        numMap[num] = 1;
    };
    return std::pair<int, int>(-1, -1);
}

int main() {
    int target = 7;
    std::vector<int> nums = {1,2,3,4,5};
    auto pair = findPair(nums, target);
    if (pair.first != -1 && pair.second != -1) {
        std::cout << "Found pair: (" << pair.first << ", " << pair.second << ")" << std::endl;
    } else {
        std::cout << "No pair found." << std::endl;
    }
}