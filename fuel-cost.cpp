#include <vector>

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = static_cast<int>(price / 3.0);
        newPrice -= 2;
        total += newPrice;
    }
    return total;
}