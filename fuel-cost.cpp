#include <vector>

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double result = floor((double)i / 3);
        sum += int(result - 2);
    }
    return sum;
}