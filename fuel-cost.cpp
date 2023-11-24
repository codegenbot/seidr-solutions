#include <vector>
#include <iostream>
#include <cmath>

int fuel_cost(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += std::floor(num / 3) - 2;
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
    std::cout << fuel_cost(nums) << std::endl;
    return 0;
}