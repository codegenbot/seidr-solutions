#include <iostream>
#include <vector>
#include <algorithm>

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
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;
    
    std::vector<int> nums(n);
    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> result = findLeaders(nums);
    
    std::cout << "Leaders in the vector: ";
    for (int leader : result) {
        std::cout << leader << " ";
    }
    
    return 0;
}