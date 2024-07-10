int totalFuelCost(vector<int> &prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3) - 2;
        sum += newPrice;
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
    cout << totalFuelCost(prices) << endl;
    return 0;
}