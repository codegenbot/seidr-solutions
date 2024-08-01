#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int val = std::floor(i / 3.0) - 2;
        sum += val;
    }
    return sum;
}