#include <vector>

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        double d = static_cast<double>(result); 
        result = floor(d); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}