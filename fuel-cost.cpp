#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& costs) {
    int total = 0;
    for (int cost : costs) {
        int newCost = static_cast<int>(cost / 3.0);
        newCost -= 2;
        total += max(0, newCost);
    }
    return total;
}