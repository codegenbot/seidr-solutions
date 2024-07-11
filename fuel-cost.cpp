#include <vector>
#include <cmath>

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        double result = double(number) / 3;
        int roundedResult = static_cast<int>(floor(result));
        if (roundedResult < 1) {
            roundedResult = 0;
        }
        total += roundedResult - 2;
    }
    return total;