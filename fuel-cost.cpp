#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::max((i / 3) - 2, 0); 
        sum += temp; 
    }
    return sum;
}

int main() {
    std::vector<int> v; 
    int n;
    while (std::cin >> n) { 
        v.push_back(n); 
    }
    int result = fuelCost(v);
    std::cout << "The fuel cost is: " << result << std::endl;
    return 0;
}