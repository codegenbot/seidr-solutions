#include <vector>

int fuelCost(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int x = static_cast<double>(i) / 3; // convert to double and then to int
        sum += std::floor(x) - 2; // round down to nearest integer
    }
    return sum;
}