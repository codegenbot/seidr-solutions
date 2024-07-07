#include <vector>
using namespace std;

int calculateFuelCost(vector<int> fuelPrices) {
    int totalCost = 0;
    for (int price : fuelPrices) {
        int newPrice = (price / 3);
        if (newPrice > 2)
            newPrice -= 2;
        else
            newPrice = 0;
        totalCost += newPrice;
    }
    return totalCost;
}

int main() {
    int n;
    cin >> n;
    vector<int> fuelPrices(n);
    for (int i = 0; i < n; i++) {
        cin >> fuelPrices[i];
    }
    cout << calculateFuelCost(fuelPrices) << endl;
    return 0;
}