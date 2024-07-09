#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(int n) {
    int cost = std::floor((double)n / 3) - 2;
    if (cost < 0) return 0;
    return cost;
}

int main() {
    std::vector<int> v = {2909, 7270, 6972};
    int sum = 0;
    for(int n : v) {
        sum += fuelCost(n);
    }
    std::cout << "Result: " << sum << std::endl;
    return 0;
}