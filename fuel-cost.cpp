#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor((double)i / 3 - 2);
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;