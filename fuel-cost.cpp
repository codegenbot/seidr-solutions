#include <iostream>
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (auto i : stations) { 
        if(i <= 3) return 0; 
        int newFuel = std::floor((i * 1.0) / 3.0) - 2;
        sum += newFuel;
    }
    return sum;
}

int main() {
    std::vector<int> stations = {692, 5576, 3919, 8505, 2925, 774, 7963, 8485, 3520, 5136, 4558, 6926, 3601, 1299, 8310, 5339}; 
    std::cout << "The total fuel cost is: " << fuelCost(stations) << std::endl;
    return 0;
}