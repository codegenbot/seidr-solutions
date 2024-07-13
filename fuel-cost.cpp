int main() {
    vector<int> values;
    int n;
    while (cin >> n) {
        values.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < values.size(); ++i) {
        sum += values[i] / 3 - 2;
    }

    cout << sum << endl;

    return 0;
}