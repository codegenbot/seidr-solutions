#include <vector>
#include <cmath>

int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        int temp = (*it / 3) - 2;
        temp = std::floor(temp + 0.5);
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}