#include <vector>
int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_val = static_cast<int>(floor((double)i / 3));
        new_val -= 2;
        sum += new_val;
    }
    return sum;