#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = static_cast<int>(std::lround((double)num / 3)) - 2; 
        sum += result;
    }
    return sum;
}