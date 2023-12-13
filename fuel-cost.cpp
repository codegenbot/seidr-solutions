```cpp
#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        int result = floor(nums[i] / 3) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    std::vector<int> nums = {3, 9, 12, 15}; // Replace with the actual input
    std::cout << fuelCost(nums) << std::endl;
    return 0;
}
```