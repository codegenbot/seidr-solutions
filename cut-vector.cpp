int main() {
    vector<int> numbers;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int minDiff = INT_MAX;
    int cutIndex = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(accumulate(numbers.begin(), numbers.begin() + i, 0) - accumulate(numbers.begin() + i, numbers.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
        if (diff == 0) {
            break;
        }
    }

    for (int i = 0; i < cutIndex; i++) {
        cout << numbers[i] << endl;
    }

    cout << endl;

    for (int i = cutIndex; i < n; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}