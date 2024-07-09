```cpp
#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int runningSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        runningSum += nums[i];
        if (runningSum < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2, 3, 10, -4, -9, 5, 1, 2, -4, 6, 10};
    int result = basement(nums);
    std::cout << "Basement index: " << result << std::endl;
    return 0;
}