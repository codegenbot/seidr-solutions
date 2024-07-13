#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    
    if (n == 0) {
        return leaders;
    }
    
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight || i == n-1) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
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
    std::cout << std::endl;
    
    return 0;
}