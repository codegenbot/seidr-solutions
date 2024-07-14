#include <iostream>
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor((double)i / 3) - 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}

int main() { 
    std::cout << fuelCost({10,20,30}) << std::endl; 
    return 0; 
}