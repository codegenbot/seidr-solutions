#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>

using IntVector = std::vector<int>;

IntVector findLeaders(IntVector nums) {
    IntVector leaders;
    int n = nums.size();
    int maxRight = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    IntVector nums = {16, 17, 4, 3, 5, 2};
    IntVector result = findLeaders(nums);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}