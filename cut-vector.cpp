int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }

    int n = input.size();
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; ++i) {
        rightSum += input[i];
    }

    int diff = INT_MAX, cutIndex = 0;
    for (int i = 0; i < n; ++i) {
        leftSum += input[i];
        rightSum -= input[i];
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
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