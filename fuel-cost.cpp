#include <vector>
#include <cmath>

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double result = static_cast<double>(i) / 3.0;
        result = floor(result);
        int newResult = static_cast<int>(result - 2);
        sum += newResult;
    }
    return sum;
}