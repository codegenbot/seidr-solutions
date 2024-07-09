```cpp
#include <vector>
#include <iostream>

int fuelCost(int n) {
    int cost = (n / 3) - (n % 3 == 0 ? 2 : 1);
    return std::min(cost, 0);
}

int main() {
    int sum = 0;
    for(int n : {2909, 7270, 6972}) { 
        sum += fuelCost(n);
    }
    std::cout << "Result: " << sum << std::endl;
    return 0;
}