#include <vector>
#include <iostream>

int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0);
        sum += newCost - 2;
    }
    return sum;
}

int main() {
    std::vector<int> costs;
    int num;
    
    while (true) {
        std::cout << "Enter a positive integer (-1 to quit): ";
        std::cin >> num;
        
        if (num < 0) break;
        
        costs.push_back(num);
    }
    
    int result = totalFuelCost(costs);
    std::cout << "Total fuel cost: " << result << std::endl;

    return 0;
}