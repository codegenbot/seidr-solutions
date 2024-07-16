#include <vector>
#include <iostream>

int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (auto i : stations) { 
        if(i <= 3) break; 
        int newFuel = static_cast<int>(i / 3.0) - 2;
        sum += newFuel;
    }
    return sum;
}

int main() {
    std::vector<int> stations = {1, 5, 7, 10};
    std::cout << "The total fuel cost is: " << fuelCost(stations) << std::endl;
    return 0;
}