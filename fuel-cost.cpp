#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = (double)i / 3;
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;