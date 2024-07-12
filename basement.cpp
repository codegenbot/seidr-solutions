#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = nums[0];
    for (int i = 0; i < nums.size(); ++i) {
        if (sum <= 0) {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}

// Main function remains the same