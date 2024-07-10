#include <vector>
#include <iostream>

int calculateFuelCost(std::vector<int> costs) {
    int sum = 0;
    for (int cost : costs) {
        int newCost = (cost / 3) - 2;
        if (newCost > 0) {
            sum += newCost;
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> costs(n);
    for (int i = 0; i < n; i++) {
        std::cin >> costs[i];
    }
    
    int result = calculateFuelCost(costs);
    std::cout << result << std::endl;

    return 0;
}