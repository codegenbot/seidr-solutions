#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(std::vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = std::floor(num / 3) - 2;
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