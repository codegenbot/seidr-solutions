#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        double result = (num * 1.0) / 3; 
        result -= 2; 
        sum += static_cast<int>(result);
    }
    return sum;
}