#include <vector>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = static_cast<int>(i / 3.0);
        temp -= 2;
        if (temp < 0) temp = 0;
        sum += temp;
    }
    return sum;
}