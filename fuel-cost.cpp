int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3;
        x = floor(x);
        sum += x - 2;
    }
    return sum;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }
    cout << fuelCost(v) << endl;
    return 0;
}