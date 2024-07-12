int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int leftSum = 0, rightSum = 0;
    int leftIndex = -1, rightIndex = -1;
    
    for (int i = 0; i < n - 1; ++i) {
        leftSum += vec[i];
        rightSum = 0;
        for (int j = i + 1; j < n; ++j) {
            rightSum += vec[j];
        }
        
        if (leftSum == rightSum || abs(leftSum - rightSum) < abs(leftIndex - rightIndex)) {
            leftIndex = i;
            rightIndex = i + 1;
        }
    }
    
    for (int i = 0; i <= leftIndex; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << endl;
    
    for (int i = rightIndex; i < n; ++i) {
        cout << vec[i] << endl;
    }
    
    return 0;
}