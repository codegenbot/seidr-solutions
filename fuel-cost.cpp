#include <iostream>
#include <vector>

int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (int i : stations) { 
        int newFuel = (i / 3) - 2;
        if(newFuel >= 0)
            sum += newFuel;
    }
    return sum;
}

int main() {
    std::vector<int> stations = {1, 2, 3};
    std::cout << "Fuel cost: " << fuelCost(stations) << std::endl;
    return 0;
}