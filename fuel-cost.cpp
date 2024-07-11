#include <vector>

int calculateFuelCost(std::vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int cost = static_cast<int>(double(price) / 3);
        total += cost - 2;
    }
    return total;
}