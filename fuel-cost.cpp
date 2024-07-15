#include <vector>
#include <cmath>

int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double result = std::floor((double)i / 3);
        sum += static_cast<int>(result - 2);
    }
    return sum;
}