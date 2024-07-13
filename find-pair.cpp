```cpp
#include <vector>
#include <utility>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;

    for (int num : nums) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return {complement, num};
        }
        if(map.find(num) != map.end()) {
            return {num, num};
        }
        map[num] = 1;
    }

    return {-1, -1};
}