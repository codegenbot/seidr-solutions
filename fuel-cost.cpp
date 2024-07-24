#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor(double(i) / 3);
        temp -= 2;
        sum += temp;
    }
    return sum;