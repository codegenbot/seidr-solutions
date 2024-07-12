#include <vector>

int calculateFuelCost(vector<int> &numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = static_cast<double>(num) / 3;
        sum += (int)(result - 2);
    }
    return sum;
}