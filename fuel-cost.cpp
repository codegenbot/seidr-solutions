#include <vector>

int calculateFuelCost(vector<int> costs) {
    int total = 0;
    for (int cost : costs) {
        int newCost = static_cast<int>(floor((double)cost / 3));
        if (newCost > 2) {
            newCost -= 2;
        } else {
            newCost = 0;
        }
        total += newCost;
    }
    return total;
}