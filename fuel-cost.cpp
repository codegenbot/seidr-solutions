#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double new_val = (double)i / 3;
        new_val = floor(new_val);
        new_val -= 2;
        sum += (int)new_val;
    }
    return sum;
}