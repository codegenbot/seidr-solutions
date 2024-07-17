#include <vector>

int calculateFuelCost(vector<int> costs) {
    int total = 0;
    for (int cost : costs) {
        int newCost = static_cast<int>(cost / 3.0);
        newCost -= 2;
        if (newCost > 0) {
            total += newCost;
        }
    }
    return total;
}