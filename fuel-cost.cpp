#include <iostream>
#include <vector>

using namespace std;

int fuelCost(vector<int>& prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        if (newPrice >= 1) 
            total += (newPrice - 2);
        else
            total -= 2; // subtract 2 even if the result is less than 1
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