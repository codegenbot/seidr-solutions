#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double result = (double)i / 3;
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}