#include <iostream>
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxLeader = nums.back();
    leaders.push_back(maxLeader);

    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.insert(leaders.begin(), maxLeader);
        }
    }

    return leaders;
}

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = findLeaders(nums);

    for (int leader : result) {
        std::cout << leader << " ";
    }

    return 0;
}