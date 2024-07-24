#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = std::floor((double)x / 3);
        y = (y > 2) ? y - 2 : 0;
        sum += y;
    }
    return sum;