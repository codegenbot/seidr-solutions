#include <vector>
#include <utility>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return std::pair<int, int>(complement < nums[i] ? complement : nums[i], nums[i]);
        }
        numIndex[nums[i]] = i;
    }
    return {};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto result = findPair(nums, target);
    if (result.first != 0 && result.second != 0) {
        printf("(%d, %d)\n", result.first, result.second);
    } else {
        printf("No pair found!\n");
    }
    return 0;
}