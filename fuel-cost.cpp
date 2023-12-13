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
    int size;
    std::cin >> size;

    std::vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        std::cin >> nums[i];
    }

    std::cout << fuelCost(nums) << std::endl;
    return 0;
}