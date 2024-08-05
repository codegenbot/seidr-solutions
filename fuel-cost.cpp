#include <vector>

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int result = static_cast<int>(std::floor((double)num / 3));
        if (result >= 1) {
            result--;
        } else {
            result = 0;
        }
        sum += result;
    }
    return sum;