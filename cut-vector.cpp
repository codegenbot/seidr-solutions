void cutVector(vector<int>& vec) {
    int n = vec.size();
    int totalSum = 0;
    for (int num : vec) totalSum += num;

    int leftSum = 0, minDiff = INT_MAX, cutIndex = 0;
    for (int i = 0; i < n - 1; ++i) {
        leftSum += vec[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftVec(vec.begin(), vec.begin() + cutIndex + 1);
    vector<int> rightVec(vec.begin() + cutIndex + 1, vec.end());

    for (int num : leftVec) cout << num << " ";
    cout << endl;
    for (int num : rightVec) cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> vec;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        vec.push_back(x);
    }
    cutVector(vec);
    return 0;
}