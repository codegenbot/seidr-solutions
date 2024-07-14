#include <iostream>
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        double result = static_cast<double>(num) / 3;
        result = floor(result);
        result -= 2; 
        sum += static_cast<int>(result);
    }
    return sum;
}