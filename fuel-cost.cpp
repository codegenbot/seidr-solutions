#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = static_cast<int>(i / 3);
        result -= 2;
        sum += result;
    }
    return sum;