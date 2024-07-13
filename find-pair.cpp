```c++
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
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::pair<int, int> pair = findPair(nums, target);
    // print or use the pair as needed
    return 0;
}