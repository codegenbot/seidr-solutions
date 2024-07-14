#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_val = std::floor((double)i / 3);
        new_val -= 2;
        sum += new_val;
    }
    return sum;