```cpp
#include <vector>
int main() {
    std::vector<int> fuelCosts = {1, 2, 3}; 
    int result = totalFuelCost(fuelCosts);
    return 0;
}
int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0);
        sum += newCost - 2;
    }
    return sum;
}