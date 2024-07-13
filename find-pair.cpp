#include <unordered_map>
#include <vector>
#include <utility>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    for (int num : nums) {
        if (map.find(num) != map.end()) {
            return std::make_pair(num, target - num);
        }
        map[num] = 1;
    }
    return std::make_pair(0, 0);
}