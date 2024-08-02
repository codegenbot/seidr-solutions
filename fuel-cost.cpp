#include <vector>

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = static_cast<int>(price / 3.0 - 2.5);
        total += newPrice;
    }
    return total;
}