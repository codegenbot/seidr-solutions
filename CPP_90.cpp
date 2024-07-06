#include <iostream>
#include <vector>

int next_larger(std::vector<int> nums) {
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        bool found = false;
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] > nums[i]) {
                result.push_back(nums[i]);
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(nums[i]);
        }
    }
    return -1;
}