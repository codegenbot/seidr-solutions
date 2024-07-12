#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &costs) {
    int total = 0;
    for (int cost : costs) {
        int newCost = floor(cost / 3.0) - 2;
        total += newCost;
    }
    return total;
}