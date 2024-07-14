#include <vector>

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        double result = (double)num / 3;
        result = floor(result);
        result -= 2; 
        sum += static_cast<int>(result); // round down to nearest integer
    }
    return sum;
}