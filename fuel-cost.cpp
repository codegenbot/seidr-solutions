#include <vector>

int calculateFuelCost(std::vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    return sum;
}