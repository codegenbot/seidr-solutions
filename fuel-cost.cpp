int main() {
    vector<int> input;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        input.push_back((num / 3) - 2);
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += input[i];
    }
    cout << sum;
    return 0;
}