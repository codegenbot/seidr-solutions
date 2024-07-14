#include <vector>

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = floor((double)result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}