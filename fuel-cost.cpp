#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        sum += (cost / 3 - 2);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> fuelCosts(n);
    for (int i = 0; i < n; i++) {
        cin >> fuelCosts[i];
    }
    cout << calculateFuelCost(fuelCosts) << endl;
    return 0;
}