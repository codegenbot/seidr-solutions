#include <vector>
#include <utility>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {nums[i], complement};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 7, 11, 2, 15};
    int target = 9;
    std::cout << "Pair: " << findPair(nums, target).first << ", " << findPair(nums, target).second << std::endl;
    return 0;
}