#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxLeader = nums.front();

    leaders.push_back(maxLeader);

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }

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
    for (int leader : result) {
        std::cout << leader << " ";
    }
    
    return 0;
}