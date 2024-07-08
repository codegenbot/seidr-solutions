```cpp
#include <vector>
#include <algorithm>

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        int j = i + 1;
        while (j < nums.size() && nums[j] < complement) {
            if (nums[j] + nums[i] == target) {
                std::vector<int> result = {nums[i], nums[j]};
                return result;
            }
            j++;
        }
    }
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    int target = 5;
    std::vector<int> result = findPair(nums, target);
    if (result[0] != -1) {
        std::cout << "Found pair: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No pair found." << std::endl;
    }
    return 0;
}