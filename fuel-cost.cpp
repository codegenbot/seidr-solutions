#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = static_cast<int>(floor((double)x / 3));
        y -= 2;
        if (y < 0) {
            y = 0;
        }
        sum += y;
    }
    return sum;