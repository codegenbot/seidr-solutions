#include <vector>

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = round(double(i) / 3);
        if (temp < 1) {
            temp = 0;
        } else {
            temp--;
        }
        sum += temp;
    }
    return sum;
}