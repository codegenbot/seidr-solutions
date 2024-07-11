int main() {
    int n, val;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        vec.push_back((val/3) - 2);
    }
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}