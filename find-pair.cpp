#include <iostream>
#include <vector>
#include <unordered_set>

std::pair<int, int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_set<int> seen;
    for (int num : nums) {
        int complement = target - num;
        if (seen.count(complement)) {
            return {complement, num};
        }
        seen.insert(num);
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

    std::pair<int, int> result = findPair(nums, target);
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;

    return 0;
}