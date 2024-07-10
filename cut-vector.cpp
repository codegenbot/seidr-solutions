pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    pair<vector<int>, vector<int>> result = {{}, {}};

    int minDiff = numeric_limits<int>::max();

    for(int i = 0; i < v.size(); i++) {
        int leftSum = accumulate(v.begin(), v.begin() + i, 0);
        int rightSum = accumulate(v.begin() + i, v.end(), 0);

        int diff = abs(leftSum - rightSum);

        if(diff == 0) {  
            result.first = v;
            result.second = vector<int>();
        } else if(diff < minDiff) {
            minDiff = diff;
            result = {{}, {}};
            for(int j = 0; j < i; j++) {
                result.first.push_back(v[j]);
            }
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }

    return result;
}