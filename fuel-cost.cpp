#include <vector>
int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        double result = (double)num / 3; 
        result = floor(result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return static_cast<int>(sum);
}