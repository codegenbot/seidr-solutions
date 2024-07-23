#include <vector>
#include <cmath>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor(i / 3) - 1;
        sum += (temp > 0 ? temp : 0) - 2;
    }
    return sum;
}

int main() {
    std::vector<int> v = {15, 10, 5};
    if (v.empty()) {
        std::cerr << "Error: Input vector is empty." << std::endl;
        return 1;
    }
    int result = fuelCost(v);
    std::cout << "Fuel cost: " << result << std::endl;
    return 0;
}