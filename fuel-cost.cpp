#include <vector>

int calculateFuelCost(vector<int> &numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = static_cast<int>(floor((double)num / 3)) - 2;
        sum += result;
    }
    return sum;