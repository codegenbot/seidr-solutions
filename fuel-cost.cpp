#include <vector>

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double temp = floor((double)i / 3);
        temp--;
        if (temp < 1) {
            temp = 0;
        }
        sum += static_cast<int>(temp);
    }
    return sum;
}