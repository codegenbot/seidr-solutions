#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        result = std::floor(static_cast<double>(result));
        result -= 2;
        sum += result;
    }
    return sum;