#include <vector>
#include <cmath>

int fuelCost(vector<int>& v) {
    int sum = 0;
    for (int i : v) {
        int x = std::floor(double(i) / 3);
        sum += x - 2; 
    }
    return sum;
}