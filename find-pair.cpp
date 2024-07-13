#include <vector>
#include <unordered_map>

std::unordered_map<int, int> numMap;
std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    for (int num : nums) {
        if (numMap.find(target - num) != numMap.end()) {
            return std::make_pair(num, target - num);
        }
        numMap[num] = 1;
    }
    return std::make_pair(0, 0);
}