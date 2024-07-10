#include <vector>
using namespace std;

int fuelCost(vector<int>& prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = (price / 3); // divide by 3 and round down to nearest integer
        if (newPrice >= 1) { // subtract 2 only if the result is greater than or equal to 1
            total += (newPrice - 2);
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cout << fuelCost(prices) << endl;
    return 0;
}