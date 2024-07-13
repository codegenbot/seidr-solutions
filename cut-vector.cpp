#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        if (i < v.size()) {
            rightSum = accumulate(v.begin() + i, v.end(), 0);
        }
        
        leftSum = accumulate(v.begin(), v.begin() + i, 0);
        
        int diff = abs(leftSum - rightSum);
        
        if (diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> leftVec;
    for (int i = 0; i < pos; i++) {
        leftVec.push_back(v[i]);
    }
    
    vector<int> rightVec;
    if (pos < v.size()) {
        for (int i = pos; i < v.size(); i++) {
            rightVec.push_back(v[i]);
        }
    } else {
        rightVec = leftVec;
    }
    
    return {leftVec, rightVec};
}