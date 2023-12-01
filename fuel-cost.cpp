#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int result = std::floor(num / 3.0) - 2;
        sum += result;
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
    std::cout << fuelCost(nums) << std::endl;
    return 0;
}