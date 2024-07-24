int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    int n = input.size();
    int total = accumulate(input.begin(), input.end(), 0);
    int sum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; ++i) {
        sum += input[i];
        int diff = abs(total - 2 * sum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i <= cutIndex; ++i) {
        cout << input[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        cout << input[i] << endl;
    }

    return 0;
}