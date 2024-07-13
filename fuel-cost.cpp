#include <vector>
#include <cmath>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = std::floor((double)i / 3);
        sum += temp <= 2 ? 0 : temp - 2;
    }
    return sum;
}

int main() {
    std::vector<int> v = {9998, 5167};
    int result = fuelCost(v);
    std::cout << "The total cost is: " << result << std::endl;
    return 0;
}