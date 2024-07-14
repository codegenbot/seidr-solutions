#include <vector>
#include <cmath>

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        double result = (double)num / 3;
        result = floor(result);
        result -= 2; 
        sum += (int)result;
    }
    return sum;
}