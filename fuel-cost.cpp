int calculateFuelCost(vector<int>& prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        if (newPrice < 1) {
            newPrice = 0;
        } else {
            newPrice--;
        }
        total += newPrice;
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
    cout << calculateFuelCost(prices) << endl;
    return 0;
}