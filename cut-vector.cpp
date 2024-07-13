int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    int prefixSum = 0;
    for (int i = 0; i < n; ++i) {
        prefixSum += numbers[i];
        if (prefixSum * 2 >= sum) {
            if (prefixSum * 2 == sum) {
                cout << i + 1 << endl;
            } else {
                cout << i + 1 << endl;
                cout << sum - prefixSum << endl;
            }
            break;
        }
    }
    return 0;
}