#include <vector>

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        double result = (double)num / 3; // convert to double for division
        result = floor(result); // round down to nearest integer
        result -= 2; 
        sum += static_cast<int>(result); // cast back to int and add to sum
    }
    return sum;
}