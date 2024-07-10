#include <vector>
using namespace std;

int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3) - 2;
        if (newPrice < 0) newPrice = 0;
        sum += newPrice;
    }
    return sum;
}

int main() {
    vector<int> prices;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int price;
        cin >> price;
        prices.push_back(price);
    }
    cout << fuelCost(prices) << endl;
    return 0;
}