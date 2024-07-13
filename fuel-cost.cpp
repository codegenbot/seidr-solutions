int main() {
    int n, num;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        vec.push_back((num / 3) - 2);
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += vec[i];
    }
    cout << sum;
    return 0;
}