#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int new_val = (i / 3);
        new_val = floor(new_val);
        new_val -= 2;
        sum += new_val;
    }
    return sum;