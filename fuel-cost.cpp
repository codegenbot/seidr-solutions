#include <vector>
#include <cmath>

int calculateFuelCost(vector<int> &numbers) {
    int total = 0;
    for (int num : numbers) {
        double result = (double)num / 3;
        int roundedResult = static_cast<int>(floor(result));
        int calculatedResult = roundedResult - 2;
        total += calculatedResult;
    }
    return total;