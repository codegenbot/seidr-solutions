#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = static_cast<double>(i / 3.0);
        int newTemp = std::floor(temp) - 2;
        if (newTemp < 0) {
            newTemp = 0;
        }
        sum += newTemp;
    }
    return sum;
}