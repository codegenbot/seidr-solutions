#include <vector>
#include <iostream>
#include <initializer_list>

int fuelCost(int n) {
    int cost = (n / 3) - (n % 3 == 0 ? 2 : 1);
    return std::min(cost, 0);
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