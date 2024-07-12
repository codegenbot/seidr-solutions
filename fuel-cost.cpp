int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        v.push_back((num / 3) - 2);
    }
    int sum = 0;
    for (int num : v) {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}