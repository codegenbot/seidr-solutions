#include <vector>
using namespace std;

int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int val = (price / 3);
        val = max(0, val - 2); // round down to nearest integer and subtract 2
        sum += val; 
    }
    return sum;
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