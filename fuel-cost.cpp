#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double newNumber = (double)i / 3;
        sum += floor(newNumber) - 2;
    }
    return sum;
}