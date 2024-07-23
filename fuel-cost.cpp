#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += std::max(0, static_cast<int>(i / 3.0) - 2);
    }
    return sum;
}