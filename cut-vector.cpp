pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = INT_MAX;
    
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec(v.begin(), v.begin() + cutIndex);
    vector<int> rightVec(v.begin() + cutIndex, v.end());
    
    return {leftVec, rightVec};
}