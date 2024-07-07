#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int newNumber = (i / 3);
        newNumber = static_cast<int>(floor(static_cast<double>(newNumber))) - 2;
        sum += newNumber;
    }
    return sum;