#include <vector>
int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = i / 3.0;
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;