#include <vector>
#include <cmath>

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int result = static_cast<int>(floor(double(number) / 3)) - 2;
        if (result < 0) {
            result = 0;
        }
        total += result;
    }
    return total;