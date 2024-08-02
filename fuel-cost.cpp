#include <vector>

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = static_cast<int>(double(price) / 3) - 2;
        total += newPrice;
    }
    return total;
}