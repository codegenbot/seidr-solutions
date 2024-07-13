int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int diff = INT_MAX;
    int cutIndex = -1;
    for (int i = 1; i < n; ++i) {
        int leftSum = accumulate(vec.begin(), vec.begin() + i, 0);
        int rightSum = accumulate(vec.begin() + i, vec.end(), 0);
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    vector<int> subVec1(vec.begin(), vec.begin() + cutIndex);
    vector<int> subVec2(vec.begin() + cutIndex, vec.end());
    
    for (int num : subVec1) {
        cout << num << endl;
    }
    for (int num : subVec2) {
        cout << num << endl;
    }
    
    return 0;
}