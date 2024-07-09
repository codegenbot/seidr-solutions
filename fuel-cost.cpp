```cpp
#include <vector>
#include <iostream>

int fuelCost(int n) {
    int cost = (n / 3) - (n % 3 == 0 ? 2 : 1);
    return std::min(cost, 0);
}

int main() {
    std::vector<int> numbers(3); 
    for (auto &n : numbers) n = 2909; 
    int sum = 0;
    for(int n : numbers) { 
        sum += fuelCost(n);
    }
    std::cout << "Result: " << sum << std::endl;
    return 0;
}