#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += std::floor((double)i / 3) > 2 ? std::floor((double)i / 3) - 2 : 0;
    }
    return sum;