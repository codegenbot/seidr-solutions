#include <vector>
#include <iostream>
#include <cmath>

int fuel_cost(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        int result = floor(nums[i] / 3) - 2;
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
    std::cout << fuel_cost(nums) << std::endl;
    return 0;
}