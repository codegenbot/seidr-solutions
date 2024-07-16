#include <cmath>
#include <vector>

int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (auto i : stations) { 
        int newFuel = std::floor(i / 3.0);
        newFuel -= 2;
        sum += newFuel;
    }
    return sum; }

int main() {
    std::vector<int> stations = {1, 2, 3};
    int result = fuelCost(stations);
    std::cout << "The total fuel cost is: " << result << std::endl;

    return 0;
}