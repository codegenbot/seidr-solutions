#include <vector>

int calculateFuelCost(vector<int> costs) {
    int sum = 0;
    for (int cost : costs) {
        int newCost = std::floor((double)cost / 3) - 2;
        if (newCost > 0) {
            sum += newCost;
        }
    }
    return sum;