```
#include <vector>
#include <cmath>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = static_cast<double>(num) / 3;
        result = floor(result);
        result -= 2;
        sum += static_cast<int>(result);
    }
    return sum;