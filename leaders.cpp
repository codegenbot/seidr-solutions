#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];
    leaders.push_back(maxRight);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    
    // Read input
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    // Find leaders
    std::vector<int> result = findLeaders(nums);

    // Output leaders
    for (int leader : result) {
        std::cout << leader << " ";
    }

    return 0;
}