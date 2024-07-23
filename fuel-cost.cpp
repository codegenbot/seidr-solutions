#include <vector>
#include <iostream>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(round(double(i) / 3.0)) - 2; 
        sum += temp; 
    }
    return sum;
}

int main() {
    std::vector<int> v;
    v.push_back(12);
    v.push_back(5);
    v.push_back(7);
    int result = fuelCost(v);
    std::cout << "The fuel cost is: " << result << std::endl;
    return 0;
}