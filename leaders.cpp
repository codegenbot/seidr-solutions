#include <iostream>
#include <vector>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int maxLeader = nums.back();
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            leaders.push_back(nums[i]);
            maxLeader = nums[i];
        }
    }
    leaders.push_back(maxLeader);
    
    return leaders;
}

int main() {
    std::vector<int> nums = {5, 3, 20, 15, 8, 3};
    
    std::vector<int> leaders = findLeaders(nums);
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}