```
#include <vector>

int fuelCost(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int x = (i / 3);
        x = static_cast<int>(floor((double)x)); // round down to nearest integer
        sum += x - 2; // subtract 2 from the result
    }
    return sum;
}