```cpp
#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = std::min(temp - 2, 0);
        sum += temp;
    }
    return sum;
}