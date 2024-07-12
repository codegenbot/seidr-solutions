#include <vector>

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = floor((double)price / 3.0) - 2;
        total += newPrice;
    }
    return total;
}