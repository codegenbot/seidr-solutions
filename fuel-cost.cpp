int fuel_cost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        sum += (num / 3 - 2);
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << fuel_cost(v) << endl;
    return 0;
}