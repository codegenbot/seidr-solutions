int main() {
    vector<int> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.push_back((num / 3) - 2);
    }
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}