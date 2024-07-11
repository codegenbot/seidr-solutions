#include <vector>

int totalFuelCost(vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0 - 2.0);
        sum += newCost;
    }
    return sum;
}