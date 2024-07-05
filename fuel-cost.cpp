```cpp
#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = std::floor((double(num) / 3));
        if(result < 1) {
            result = 0;
        } else {
            result--;
        }
        sum += static_cast<int>(result);
    }
    return sum;
}

int main() {
    int n;
    std::vector<int> numbers;

    // Read input
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter integer #"<<i+1<<": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    // Calculate fuel cost
    int fuelCost = calculateFuelCost(numbers);

    // Print output
    std::cout << "The total fuel cost is: " << fuelCost << std::endl;

    return 0;
}