```cpp
#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += static_cast<int>(std::floor((double)i / 3)) - 2;
    }
    return sum;
}