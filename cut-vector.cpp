#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            idx = i;
        }
    }
    
    vector<int> left = v.substr(0, idx).split();
    vector<int> right = v.substr(idx).split();
    
    return {left, right};
}