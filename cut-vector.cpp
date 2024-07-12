int main() {
    vector<int> input;
    int n, num;
    while (cin >> num) {
        input.push_back(num);
    }

    int total = 0;
    for (int i = 0; i < input.size(); ++i) {
        total += input[i];
    }

    int sum = 0;
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 0; i < input.size(); ++i) {
        sum += input[i];
        int diff = abs(total - 2 * sum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    cout << "1" << endl;
    for (int i = 0; i <= cutIndex; ++i) {
        cout << input[i] << endl;
    }
    cout << "0" << endl;

    return 0;
}