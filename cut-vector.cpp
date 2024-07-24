#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < cutIndex; i++) {
        left.push_back(v[i]);
    }
    for (int i = cutIndex; i < n; i++) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}