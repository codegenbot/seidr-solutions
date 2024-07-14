#include <iostream>
#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3) - 2; 
        sum += temp;
    }
    return sum;
}

int main() {
    std::cout << fuelCost({1390, 8945, 8287, 969, 1247}) << std::endl;
}