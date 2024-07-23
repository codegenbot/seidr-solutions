#include <vector>
#include <cmath>
#include <iostream>
#include <array>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = std::floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> v;
    for (int x : {5, 10, 15}) { v.push_back(x); }
    if (v.empty()) {
        std::cerr << "Error: Input vector is empty." << std::endl;
        return 1;
    }
    int result = fuelCost(v);
    std::cout << "Fuel cost: " << result << std::endl;
    return 0;
}