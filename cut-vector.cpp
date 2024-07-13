int main() {
    vector<int> vec;
    int num;
    
    while (cin >> num) {
        vec.push_back(num);
    }
    
    int totalSum = accumulate(vec.begin(), vec.end(), 0);
    int leftSum = 0, rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < vec.size(); ++i) {
        leftSum += vec[i];
        rightSum -= vec[i];
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << vec[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex + 1; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    
    cout << 0 << endl;
    
    return 0;
}