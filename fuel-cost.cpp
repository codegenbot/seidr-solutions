```cpp
#include <vector>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3) - 2; 
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}

int main() { std::cout << fuelCost({1, 2, 3, 4, 5}) << std::endl; }