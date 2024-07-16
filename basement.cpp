```c++
#include <vector>
#include <iostream>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int result = basement(nums);
    if (result != -1) {
        std::cout << "Basement found at index " << result << std::endl;
    } else {
        std::cout << "No basement found." << std::endl;
    }
    return 0;
}