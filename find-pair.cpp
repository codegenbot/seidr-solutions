```cpp
#include <vector>
#include <unordered_map>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, std::vector<int>> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            for (auto j : numMap[complement]) { 
                return std::make_pair(nums[i], nums[j]);
            }
        }
        numMap[nums[i]].push_back(i);
    };
    return std::pair<int, int>(-1, -1);
}

int main() {
    std::vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 10; 
    std::pair<int, int> result = findPair(nums, target);
    if (result.first != -1 && result.second != -1) {
        std::cout << "The pair that sums up to " << target << " is (" << result.first << ", " << result.second << ")" << std::endl;
    } else {
        std::cout << "No such pair exists." << std::endl;
    }
    return 0;
}