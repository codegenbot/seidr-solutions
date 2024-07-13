```cpp
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
    return std::make_pair(0, 0);
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    int target = 5;
    auto pair = findPair(nums, target);
    // Do something with the result...
    return 0;
}