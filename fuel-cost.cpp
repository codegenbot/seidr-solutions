#include <vector>

int fuelCost(std::vector<int> &stations) {
    int sum = 0;
    for (int i : stations) { 
        int newFuel = static_cast<int>(i / 3.0) - 2;
        sum += newFuel;
    }
    return sum;
}

int main() {
    std::vector<int> stations = {1, 2, 3}; // your input vector
    int result = fuelCost(stations);
    return 0;
}