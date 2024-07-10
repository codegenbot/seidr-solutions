#include <vector>
using namespace std;

int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = floor((double)price / 3) - 2;
        sum += max(0, newPrice);
    }
    return sum;
}

int main() {
    vector<int> prices;
    int numPrices;
    cin >> numPrices;
    for (int i = 0; i < numPrices; ++i) {
        int price;
        cin >> price;
        prices.push_back(price);
    }
    cout << fuelCost(prices) << endl;
    return 0;
}