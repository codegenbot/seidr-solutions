```cpp
#include <vector>
#include <algorithm>

int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (int i : stations) {
        int newFuel = std::floor(i / 3.0);
        newFuel -= 2;
        sum += newFuel;
    }
    return sum;
}