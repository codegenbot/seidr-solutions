int fuel_cost(vector<int> costs) {
    int total = 0;
    for (int cost : costs) {
        total += max(cost / 3 - 2, 0);
    }
    return total;
}

int main() {
    vector<int> costs;
    int n, cost;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> cost;
        costs.push_back(cost);
    }
    cout << fuel_cost(costs) << endl;
    return 0;
}