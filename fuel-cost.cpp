Here is the completed code:

#include <vector>
using namespace std;

int calculateFuelCost(vector<int> fuelCosts) {
    int totalCost = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0);
        newCost = max(0, newCost - 2);
        totalCost += newCost;
    }
    return totalCost;
}

int main() {
    int n;
    cin >> n;
    vector<int> fuelCosts(n);
    for (int i = 0; i < n; ++i) {
        cin >> fuelCosts[i];
    }
    cout << calculateFuelCost(fuelCosts) << endl;
    return 0;
}