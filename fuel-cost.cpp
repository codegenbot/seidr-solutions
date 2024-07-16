#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int val = static_cast<int>(std::floor((double)i / 3)) - 2;
        sum += val;
    }
    return sum;