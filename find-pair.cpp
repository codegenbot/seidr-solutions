```cpp
#include <vector>
#include <map>

std::pair<int, int> findPair(std::vector<int> nums, int target) {
    std::map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {10, 20, 30, 40, 50};
    int target = 60;
    std::pair<int, int> result = findPair(nums, target);
    if (result.first != -1 && result.second != -1) {
        std::cout << "The two elements that sum to the target are: " << result.first << ", " << result.second << std::endl;
    } else {
        std::cout << "No such pair found." << std::endl;
    }
    return 0;
}