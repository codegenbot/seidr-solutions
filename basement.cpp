#include <iostream>
#include <vector>
#include <sstream>

int basement(const std::vector<int>& nums) {
    int sum = 0, min_sum = 0, index = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
            index = i;
        }
    }
    return index + 1;
}