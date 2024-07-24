#include <vector>

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double temp = double(i)/3;
        temp = floor(temp);
        if (temp >= 1) {
            temp--;
        } else {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}