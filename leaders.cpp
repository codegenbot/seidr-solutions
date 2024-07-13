#include <iostream>
#include <vector>
#include <climits>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int minLeader = INT_MIN;

    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= minLeader) {
            minLeader = std::max(minLeader, nums[i]);
            leaders.insert(leaders.begin(), nums[i]);
        }
    }

    return leaders;
}

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = findLeaders(nums);

    for (int i = result.size() - 1; i >= 0; --i) {
        std::cout << result[i] << " ";
    }

    return 0;
}