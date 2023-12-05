```
#include <iostream>
#include <vector>

std::vector<int> find_pair(const std::vector<int>& nums, int target) {
    std::vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] + nums[i + 1] == target) {
            result.push_back(nums[i]);
            result.push_back(nums[i + 1]);
            break;
        }
    }
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 6;
    auto result = find_pair(nums, target);
    for (auto& x : result) {
        std::cout << x << " ";
    }
    return 0;
}
```