#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = std::floor((double)i / 3);
        sum += temp > 2 ? temp - 2 : 0;
    }
    return sum;
}