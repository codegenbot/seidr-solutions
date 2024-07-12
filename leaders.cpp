#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int maxLeader = nums.back();
    
    leaders.push_back(maxLeader); // Include the rightmost element as a leader
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] > maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    
    return leaders;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> result = findLeaders(nums);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}