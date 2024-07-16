```cpp
#include <iostream>
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (int i : stations) { 
        int newFuel = std::floor((double)(i/3)) - 2; // Use integer division and rounding
        if(newFuel >= 0)
            sum += newFuel;
    }
    return sum;
}

int main() {
    std::cout << "Fuel cost: " << fuelCost({692, 5576, 3919, 8505, 2925, 774, 7963, 8485, 3520, 5136, 4558, 6926, 3601, 1299, 8310, 5339}) << std::endl;
    return 0;
}