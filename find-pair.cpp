#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
        if (m.find(target - nums[i]) != m.end()) {
            return {nums[i], target - nums[i]};
        }
        m[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;

    std::vector<int> result = findPair(nums, target);
    for (int num : result) {
        std::cout << num << std::endl;
    }

    return 0;
}