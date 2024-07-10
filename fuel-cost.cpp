#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (auto num : vec) {
        int result = static_cast<int>(std::floor(double(num) / 3));
        sum += result - 2;
    }
    return sum;
}