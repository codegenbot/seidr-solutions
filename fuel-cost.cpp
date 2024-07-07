#include <vector>
#include <cmath>

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = (double)num / 3.0;
        result = floor(result);
        result -= 2.0;
        sum += static_cast<int>(result);
    }
    return sum;
}