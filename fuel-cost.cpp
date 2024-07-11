#include <iostream>
using namespace std;

int totalFuelCost(vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0);
        sum += newCost - 2;
    }
    return sum;
}

int main() {
    vector<int> costs = {10, 20, 30};
    int result = totalFuelCost(costs);
    cout << "Total fuel cost: " << result << endl;

    return 0;
}