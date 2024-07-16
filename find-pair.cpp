```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] + nums[i+1] == target) {
            return {nums[i], nums[i+1]};
        }
    }
    return {};
}

int main() {
    std::vector<int> nums = {1,7,11,2,15};
    int target = 9;
    auto pair = findPair(nums, target);
    
    if (!pair.empty()) {
        std::cout << "Pair found: " << pair[0] << ", " << pair[1] << std::endl;
    } else {
        std::cout << "No pair found." << std::endl;
    }
}