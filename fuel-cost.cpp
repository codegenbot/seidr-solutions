#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double newNumber = static_cast<double>(i / 3);
        newNumber = floor(newNumber) - 2;
        sum += newNumber;
    }
    return sum;
}