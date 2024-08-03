#include <vector>
using namespace std;

int calculateFuelCost(vector<int> prices) {
    int totalCost = 0;
    for (int price : prices) {
        int cost = (price / 3) - 2; // divide by 3, round down and subtract 2
        totalCost += cost;
    }
    return totalCost;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cout << calculateFuelCost(prices) << endl;
    return 0;
}