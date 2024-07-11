#include <vector>

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int cost = static_cast<int>(price / 3.0) - 2;
        total += cost;
    }
    return total;