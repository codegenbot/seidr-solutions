```
#include <vector>

int calculateFuelCost(std::vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = std::floor((double)price / 3 - 2);
        total += newPrice;
    }
    return total;
}