```
#include <iostream>
#include <vector>

int find_pair(std::vector<int>& nums, int target) {
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return std::make_pair(nums[i], nums[j]);
            }
        }
    }
    return std::make_pair(-1, -1); // If no pair is found
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto result = find_pair(nums, target);
    std::cout << "The pair is: (" << result.first << ", " << result.second << ")" << std::endl;
    return 0;
}
```