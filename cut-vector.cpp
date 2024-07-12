int main() {
    vector<int> vec;
    int num;
    
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int totalSum = accumulate(vec.begin(), vec.end(), 0);
    int leftSum = 0, rightSum = totalSum;
    int diff = INT_MAX;
    int cutIdx = 0;
    
    for (int i = 0; i < vec.size(); ++i) {
        leftSum += vec[i];
        rightSum -= vec[i];
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIdx = i;
        }
    }
    
    for (int i = 0; i <= cutIdx; ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    
    for (int i = cutIdx + 1; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    cout << 0 << endl;
    
    return 0;
}