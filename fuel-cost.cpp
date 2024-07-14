#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = (cost / 3) - 2;
        if (newCost > 0) {
            sum += newCost;
        }
    }
    return sum;
}

int main() {
    vector<int> fuelCosts;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int cost;
        cin >> cost;
        fuelCosts.push_back(cost);
    }
    cout << calculateFuelCost(fuelCosts) << endl;
    return 0;
}