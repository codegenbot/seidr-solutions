#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; ++i) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; ++j)
            sumLeft += v[j];
        for (int j = i + 1; j < n; ++j)
            sumRight += v[j];
        
        if (sumLeft == sumRight) {
            return {{}, {v.begin(), v.end()}};
        }
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + idx);
    vector<int> right(v.begin() + idx, v.end());
    
    return {left, right};
}