#include <vector>
#include <cmath>

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = std::floor(double(i) / 3);
        x -= 2;
        sum += x;
    }
    return sum;
}