#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += static_cast<int>(floor((double)i / 3)) - 2;
    }
    return sum;
}