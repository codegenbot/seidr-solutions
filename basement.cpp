#include <iostream>
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> nums = {2, -3, 4};
    int index = basement(nums);
    if (index != -1) {
        std::cout << "The first basement is at index " << index << ".\n";
    } else {
        std::cout << "No basement found.\n";
    }
    return 0;