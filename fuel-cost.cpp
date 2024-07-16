```c++
#include <iostream>
#include <vector>

int fuelCost(std::vector<int> stations) {
    int totalFuel = 0;
    for (int station : stations) {
        int cost = (station / 3);
        if (cost < 1) {
            cost = 0;
        } else {
            cost -= 2;
        }
        totalFuel += cost;
    }
    return totalFuel;
}

int main() {
    std::vector<int> stations = {4, 7, 10};
    std::cout << "Fuel cost: " << fuelCost(stations) << std::endl;
    return 0;
}