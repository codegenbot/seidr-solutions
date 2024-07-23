#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += std::max(0, static_cast<int>(i / 3.0) - 2);
    }
    return sum;
}

int main() {
    std::cout << fuelCost({12}) << std::endl; 
    std::cout << fuelCost({14}) << std::endl; 
    std::cout << fuelCost({25}) << std::endl; 
    std::cout << fuelCost({30}) << std::endl; 
    return 0;
}