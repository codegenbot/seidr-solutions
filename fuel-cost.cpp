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
    
    // Read the number of test cases
    std::cout << "Enter the number of test cases: ";
    std::cin >> n;
    
    // Read the fuel costs for each test case
    for(int i = 0; i < n; ++i) {
        int cost;
        std::cout << "Enter the fuel cost for test case " << i+1 << ": ";
        std::cin >> cost;
        
        numbers.push_back(cost);
    }
    
    // Calculate and print the fuel cost
    int totalFuelCost = calculateFuelCost(numbers);
    std::cout << "Total fuel cost: " << totalFuelCost << std::endl;

    return 0;
}