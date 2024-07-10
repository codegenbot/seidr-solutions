#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            sumRight += v[j];
        }
        
        if (sumLeft == sumRight) {
            res.first = vector<int>(v.begin(), v.begin() + i + 1);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    // If no equal partition found
    int minDiff = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            res.first = vector<int>(v.begin(), v.begin() + i + 1);
            res.second = vector<int>(v.begin() + i, v.end());
            minDiff = diff;
        }
    }
    
    return res;
}