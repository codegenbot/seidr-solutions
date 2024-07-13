#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = std::floor((double)i / 3);
        if (temp < 2) {
            temp = 0;
        } else {
            temp -= 2;
        }
        sum += temp;
    }
    return sum;
}