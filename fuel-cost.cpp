#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += std::floor(num / 3.0) - 2;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int result = fuelCost(nums);
    std::cout << result << std::endl;

    return 0;
}