#include <vector>
#include <iostream>

int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = std::floor(result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    
    std::cout << fuelCost(vec) << std::endl;

    return 0;
}