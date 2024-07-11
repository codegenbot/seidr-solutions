int main() {
    int n, total = 0, leftSum = 0, rightSum;
    vector<int> vec;
    
    cin >> n;
    vec.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        total += vec[i];
    }
    
    int minDiff = INT_MAX;
    int cutIdx = -1;
    
    for (int i = 0; i < n; i++) {
        leftSum += vec[i];
        rightSum = total - leftSum;
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i <= cutIdx; i++) {
        cout << vec[i] << endl;
    }
    
    for (int i = cutIdx + 1; i < n; i++) {
        cout << vec[i] << endl;
    }
    
    return 0;
}