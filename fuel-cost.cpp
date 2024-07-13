int fuel_cost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        total += max(0, price/3 - 2);
    }
    return total;
}
int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    cout << fuel_cost(prices) << endl;
    return 0;
}