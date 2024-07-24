#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        result = std::floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}