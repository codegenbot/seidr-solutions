```cpp
#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        double result = static_cast<double>(num) / 3;
        sum += std::floor(result) - 2;
    }
    return sum;
}