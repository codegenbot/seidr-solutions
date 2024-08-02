#include <vector>

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = static_cast<int>(floor(double(price)/3)) - 2;
        total += newPrice;
    }
    return total;
}