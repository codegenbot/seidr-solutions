#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxLeader = nums.back();

    leaders.push_back(maxLeader);

    for (int i = nums.size() - 2; i >= 0; i--) {
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
    for (int i = result.size() - 1; i >= 0; i--) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}