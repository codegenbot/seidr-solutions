#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &prices) {
    int totalCost = 0;
    for (int price : prices) {
        int newPrice = (price / 3) - 2;
        totalCost += newPrice;
    }
    return totalCost;
}

int main() {
    vector<int> prices;
    int n;
    cin >> n;
    while (n--) {
        int price;
        cin >> price;
        prices.push_back(price);
    }
    cout << calculateFuelCost(prices) << endl;
    return 0;
}