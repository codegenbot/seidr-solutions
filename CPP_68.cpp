int main() {
    vector<pair<int, int>> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element pair (" << i + 1 << "): ";
        int num1, num2;
        cin >> num1 >> num2;
        arr.push_back({num1, num2});
    }
    vector<pair<int, int>> result = pluck(arr);
    return 0;
}