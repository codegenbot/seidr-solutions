#include <vector>
int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = (cost / 3 - 2);
        sum += newCost;
    }
    return sum;
}

int main() {
    std::vector<int> costs = {1, 2, 3};
    int result = totalFuelCost(costs);
    std::cout << "Total fuel cost: " << result << std::endl;
    return 0;