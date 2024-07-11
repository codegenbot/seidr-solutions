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
    int totalCost = totalFuelCost(costs);
    std::cout << "The total fuel cost is: " << totalCost << std::endl;
    return 0;
}