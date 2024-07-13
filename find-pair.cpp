#include <cstddef>
#include <utility>
#include <vector>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int num : nums) {
        if (numMap.find(target - num) != numMap.end()) {
            return std::make_pair(num, target - num);
        }
        numMap[num] = 1;
    }
    // If no pair is found, return an invalid pair
    return std::pair<int, int>(-1, -1);
}

int main() {
    std::vector<int> nums = {-3896, -6008, 351, -4029, -6008, 9348, 5446, -8122, -847, -9918, 503, -4972, -6627, -9904};
    int target = 0;
    std::pair<int, int> pair = findPair(nums, target);
    // print or use the pair as needed
    return 0;
}