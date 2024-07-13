#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxLeader = nums.back();

    for (int i = nums.size() - 2; i > 0; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    
    leaders.push_back(nums.back());
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    int n, num;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        nums.push_back(num);
    }
    
    std::vector<int> result = findLeaders(nums);
    
    std::cout << "Leaders: ";
    for (auto it = result.rbegin(); it != result.rend(); ++it) {
        std::cout << *it << " ";
    }
    
    return 0;
}