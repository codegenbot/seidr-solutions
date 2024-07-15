pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        if (i > 0)
            for (int j = 0; j < i; ++j) 
                leftSum += v[j];
        
        for (int j = i; j < v.size(); ++j) 
            rightSum += v[j];
        
        if (leftSum == rightSum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        } else {
            int diff = abs(leftSum - rightSum);
            
            if (diff < minDiff) {
                minDiff = diff;
                splitIndex = i;
            }
        }
    }
    
    pair<vector<int>, vector<int>> result({{0}, {0}});
    result.first.resize(splitIndex);
    for (int i = 0; i < splitIndex; ++i)
        result.first[i] = v[i];
    result.second.resize(v.size() - splitIndex);
    for (int i = 0; i < v.size() - splitIndex; ++i)
        result.second[i] = v[splitIndex + i];
    
    return result;
}