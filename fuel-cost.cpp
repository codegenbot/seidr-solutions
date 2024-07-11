#include <vector>
int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0);
        sum += newCost - 2;
    }
    return sum;
}