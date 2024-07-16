#include <vector>
using namespace std;

int calculateFuelCost(vector<int> fuelPrices) {
    int totalCost = 0;
    for (int price : fuelPrices) {
        int newPrice = (price / 3);
        if (newPrice < 1)
            newPrice = 0;
        else
            newPrice -= 2;
        totalCost += newPrice;
    }
    return totalCost;
}

int main() {
    vector<int> prices;
    int price;

    // Read input from user
    while (cin >> price) {
        prices.push_back(price);
    }

    // Calculate and print the fuel cost
    cout << calculateFuelCost(prices) << endl;

    return 0;
}