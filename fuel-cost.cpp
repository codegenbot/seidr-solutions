#include <vector>
using namespace std;

int calculateFuelCost(vector<int> prices) {
    int totalCost = 0;
    for (int price : prices) {
        int cost = (price / 3);
        if (cost < 1) cost = 0;
        else cost--;
        totalCost += cost;
    }
    return totalCost;
}