#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n-1) continue;
        
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i/2; j++)
            leftSum += vec[j];
        for (int j = i + i/2; j < n; j++)
            rightSum += vec[j];
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    vector<int> leftVec, rightVec;
    for (int i = 0; i < idx; i++) leftVec.push_back(vec[i]);
    for (int i = idx; i < n; i++) rightVec.push_back(vec[i]);
    
    return {leftVec, rightVec};
}