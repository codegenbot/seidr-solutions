#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        int result = std::floor(nums[i] / 3) - 2;
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
    int result = fuelCost(nums);
    std::cout << result << std::endl;
    return 0;
}