#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return nums.size();
}

int main() {
    // Test your function here
    std::vector<int> test1 = {1, -2, 3, -5, 7};
    std::cout << basement(test1) << std::endl; // Output: 3

    std::vector<int> test2 = {1, 2, 3, 4, 5};
    std::cout << basement(test2) << std::endl; // Output: 5

    return 0;
}