int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        totalSum += vec[i];
    }
    
    int leftSum = 0, rightSum = totalSum;
    int minDiff = INT_MAX, cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += vec[i];
        rightSum -= vec[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; i++) {
        cout << vec[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex + 1; i < n; i++) {
        cout << vec[i] << endl;
    }
    
    return 0;
}