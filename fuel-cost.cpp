#include <vector>

int calculateFuelCost(vector<int> &numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = (double)num / 3.0;
        sum += floor(result) - 2.0;
    }
    return static_cast<int>(sum);
}