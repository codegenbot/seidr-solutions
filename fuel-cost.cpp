int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += (v[i] / 3) - 2;
    }
    cout << sum << endl;
    return 0;
}