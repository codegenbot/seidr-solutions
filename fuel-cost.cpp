#include <iostream>
#include <vector>

int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (auto station : stations) {
        int remainder = station % 3;
        auto fuel = std::floor((station - 2) / 3.0);
        if (remainder > 0) {
            fuel += 1;
        }
        sum += fuel;
    }
    return sum;
}

int main() {
    std::vector<int> stations = {12, 24, 36};
    std::cout << "Fuel cost: " << fuelCost(stations) << std::endl;
    return 0;
}