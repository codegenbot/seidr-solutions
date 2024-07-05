```c++
#include <iostream>
#include <cmath>

int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = std::floor((double(num) / 3));
        if(result >= 1) {
            result -= 2;
        } else {
            result = 0;
        }
        sum += static_cast<int>(result);
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {4, 5, 6};
    int fuelCost = calculateFuelCost(numbers);
    std::cout << "The total fuel cost is: " << fuelCost << std::endl;
    return 0;
}