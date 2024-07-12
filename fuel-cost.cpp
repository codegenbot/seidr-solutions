```cpp
#include <vector>
#include <cmath>

using namespace std;

int calculateFuelCost(vector<int> costs) {
    int sum = 0;
    for (int cost : costs) {
        int newCost = static_cast<int>(floor((double)cost / 3)) - 2;
        if (newCost > 0) {
            sum += newCost;
        }
    }
    return sum;
}