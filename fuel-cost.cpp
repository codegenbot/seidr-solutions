```cpp
#include <vector>
#include <cmath>
#include <iostream>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor((double)i / 3);
        if (temp < 2) {
            temp = 0;
        } else {
            temp -= 2;
        }
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> v = {1, 2, 3};
    int result = fuelCost(v);
    std::cout << "The total cost is: " << result << std::endl;
    return 0;
}