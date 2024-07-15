#include <vector>
#include <cmath>

using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += static_cast<int>(floor(double(i) / 3)) - 2;
    }
    return sum;
}