#include <vector>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = i / 3 - 2;
        if (result < 0) {
            result = 0;
        }
        sum += result;
    }
    return sum;