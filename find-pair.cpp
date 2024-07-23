#include <utility>
#include <vector>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {std::min(nums[i], complement), std::max(nums[i], complement)};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 7;
    std::pair<int, int> result = findPair(nums, target);
    if (result.first == -1 && result.second == -1) {
        std::cout << "No pair found." << std::endl;
    } else {
        std::cout << "The pair is (" << result.first << ", " << result.second << ")." << std::endl;
    }
    return 0;
}