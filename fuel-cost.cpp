```cpp
#include <vector>

int calculateFuelCost(const std::vector<int>& costs) {
    int sum = 0;
    for (int cost : costs) {
        int newCost = (cost / 3) - 2; 
        sum += newCost;
    }
    return sum;
}