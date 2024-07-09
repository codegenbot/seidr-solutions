#include <vector>
#include <iostream>

int basement(std::vector<int> nums) {
    int total_sum = 0;
    int idx = -1; 
    for (int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        if (total_sum < 0 && idx == -1) { 
            idx = i;
        }
    }
    return idx;
}

int main() {
    std::vector<int> nums = {-5, 1, -3, 4, -2};
    return basement(nums);
}