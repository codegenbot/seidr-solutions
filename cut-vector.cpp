pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j) {
            leftSum += v[j];
        }
        
        for (int j = i; j < v.size(); ++j) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    pair<vector<int>, vector<int>> result;
    result.first = vector<int>(v.begin(), v.begin() + splitIndex);
    result.second = vector<int>(v.begin() + splitIndex, v.end());
    
    return result;