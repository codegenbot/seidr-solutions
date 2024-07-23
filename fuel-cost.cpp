#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = static_cast<double>(i) / 3; 
        sum += static_cast<int>(std::floor(temp)) - 2; 
    }
    return sum;
}