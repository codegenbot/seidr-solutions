#include <iostream>
#include <vector>

int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (auto station : stations) {
        auto fuel = static_cast<int>(station / 3.0);
        sum += fuel - 2;
    }
    return sum;
}

int main() {
    std::vector<int> stations = { /* your input vector */ };
    std::cout << "Fuel cost: " << fuelCost(stations) << std::endl;
    return 0;
}