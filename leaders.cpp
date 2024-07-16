#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxLeader = nums[n - 1];
    leaders.push_back(maxLeader);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= leaders.back()) {
            leaders.push_back(nums[i]);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> input = {12, 9, 7, 14, 8, 6};
    std::vector<int> result = findLeaders(input);
    for (int val : result) {
        std::cout << val << " ";
    }
    return 0;
}