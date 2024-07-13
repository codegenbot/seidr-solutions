int main() {
    vector<int> vec;
    int n, sum = 0, half;
    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        sum += vec[i];
    }
    half = sum / 2;
    int currSum = 0, idx = -1;
    for (int i = 0; i < n; ++i) {
        currSum += vec[i];
        if (currSum >= half) {
            idx = i;
            break;
        }
    }
    if (abs(sum - 2 * currSum) < abs(sum - 2 * (currSum - vec[idx]))) {
        for (int i = 0; i <= idx; ++i) {
            cout << vec[i] << endl;
        }
        cout << sum - currSum << endl;
    } else {
        for (int i = 0; i < idx; ++i) {
            cout << vec[i] << endl;
        }
        cout << sum - (currSum - vec[idx]) << endl;
    }
    
    return 0;
}