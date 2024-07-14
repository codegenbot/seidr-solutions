#include <vector>

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        long temp = static_cast<long>(result); // cast to long to avoid overflow
        result = temp; 
        result -= 2; 
        sum += result;
    }
    return sum;
}