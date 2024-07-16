#include <vector>

int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (auto i : stations) { 
        int newFuel = i / 3 - 2;
        sum += newFuel;
    }
    return sum; }

int main() {
    std::vector<int> stations = {1, 2, 3}; 
    std::cout << "The total fuel cost is: " << fuelCost(stations) << std::endl;
    return 0;
}