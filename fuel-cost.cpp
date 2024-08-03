#include <vector>
using namespace std;

int calculateFuelCost(vector<int> fuelPrices) {
    int totalCost = 0;
    for (int i : fuelPrices) {
        i /= 3; // divide by 3
        i = floor(i); // round down to the nearest integer
        i -= 2; // subtract 2
        totalCost += i; // add to total cost
    }
    return totalCost;
}

int main() {
    int n, fuel;
    cin >> n;
    vector<int> fuelPrices(n);
    for (int& x : fuelPrices) cin >> x;
    cout << calculateFuelCost(fuelPrices) << endl;
    return 0;
}