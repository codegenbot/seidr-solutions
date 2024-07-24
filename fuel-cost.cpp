```c++
#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int> &numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = static_cast<int>(floor((double)num / 3));
        result -= 2;
        total += result;
    }
    return total;
}