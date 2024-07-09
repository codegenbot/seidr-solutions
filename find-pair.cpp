```cpp
#include <vector>
#include <utility>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    std::vector<int> numsVec(nums, nums + sizeof(nums) / sizeof(*nums));
    int target = 7;
    std::pair<int, int> result = findPair(numsVec, target);
    if (result.first != -1) {
        std::cout << "The pair is (" << result.first << ", " << result.second << ")" << std::endl;
    } else {
        std::cout << "No pair found" << std::endl;
    }
    return 0;
}