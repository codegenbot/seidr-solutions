```cpp
#include <vector>

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int cost = static_cast<int>(std::floor(double(price) / 3)) - 2;
        total += cost;
    }
    return total;
}