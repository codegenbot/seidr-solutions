#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += std::floor(std::floor(static_cast<double>(i) / 3)) - 2; 
    }
    return sum;
}