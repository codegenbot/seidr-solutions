#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_val = (i / 3);
        new_val = lround(new_val); // Use lround instead of floor
        new_val -= 2;
        sum += new_val;
    }
    return sum;
}