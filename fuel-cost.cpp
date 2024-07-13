```cpp
#include <vector>
#include <cmath>
#include <iostream>

#define _SILENT_STANDARD_NAMESPACE_DEPRECATION_WARNING
#include <c++17>

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
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    int result = fuelCost(v);
    std::cout << "The total cost is: " << result << std::endl;
    return 0;
}