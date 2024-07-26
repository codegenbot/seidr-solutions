int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n / 3 - 2);
    }
    int sum = 0;
    for (int num : v) {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}