int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    int leftSum = 0, rightSum = accumulate(v.begin(), v.end(), 0);
    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < v.size(); i++) {
        leftSum += v[i];
        rightSum -= v[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff || (diff == minDiff && cutIndex == -1)) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    for (int i = 0; i <= cutIndex; i++) {
        cout << v[i] << endl;
    }
    cout << 0 << endl;
    return 0;
}