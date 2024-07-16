#include <iostream>
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (int i : stations) { 
        int newFuel = std::floor(i / 3.0) - 2;
        sum += newFuel;
    }
    return sum;
}

int main() {
    std::vector<int> stations = {1, 2, 3};
    std::cout << "Fuel cost: " << fuelCost(stations) << std::endl;
    return 0;
}