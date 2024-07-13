#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    
    if (n == 0) {
        return leaders;
    }
    
    int maxRight = nums[n-1];
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