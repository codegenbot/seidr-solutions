#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double x = static_cast<double>(i) / 3;
        x = floor(x);
        x -= 2;
        sum += x;
    }
    return sum;
}