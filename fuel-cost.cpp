#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(std::floor((double)i / 3)) - 2; 
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> v = {12, 5, 1};
    int result = fuelCost(v);
    std::cout << "Fuel cost: " << result << std::endl;
    return 0;
}