#include <vector>
using namespace std;

int calculateFuelCost(vector<int> fuelPrices) {
    int totalFuelCost = 0;
    for (int price : fuelPrices) {
        int newPrice = (price / 3);
        if (newPrice >= 1) {
            newPrice -= 2;
            totalFuelCost += newPrice;
        }
    }
    return totalFuelCost;
}

int main() {
    vector<int> prices;
    int price;
    while (cin >> price && price > 0) {
        prices.push_back(price);
    }
    cout << calculateFuelCost(prices) << endl;
    return 0;
}