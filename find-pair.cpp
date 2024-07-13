#include <vector>
#include <algorithm>
#include <iostream>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        int j = i + 1;
        while (j < nums.size()) {
            if (nums[j] == complement) {
                return {complement, nums[i]};
            } else if (nums[j] > complement) {
                break;
            }
            j++;
        }
    }

    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto result = findPair(nums, target);
    if(result.first != -1 && result.second != -1) {
        std::cout << "The pair of numbers that sum to the target is: (" << result.first << ", " << result.second << ")";
    } else {
        std::cout << "No such pair found.";
    }
    return 0;
}