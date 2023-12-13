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
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> size;

    std::cout << "Enter the elements of the vector:" << std::endl;
    std::vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        std::cin >> nums[i];
    }

    std::cout << fuelCost(nums) << std::endl;
    return 0;
}