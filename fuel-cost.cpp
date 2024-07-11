#include <vector>

int calculateFuelCost(std::vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int cost = std::floor((double)price / 3) - 2;
        total += cost;
    }
    return total;
}