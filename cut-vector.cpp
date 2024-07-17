#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; ++i) {
        if ((v[i] == 0 && i == 0) || (v[i] != 0 && v[0] == 0)) {
            res[0].clear();
            res[1].clear();
            res[0].push_back(v[i]);
            res[1].push_back(v[i]);
            return res;
        }
        
        if ((i > 0) && (v[i] - v[i-1]) < minDiff) {
            minDiff = v[i] - v[i-1];
            idx = i;
        }
    }
    
    res[0].clear();
    res[1].clear();
    for (int i = 0; i < n; ++i) {
        if (i <= idx) {
            res[0].push_back(v[i]);
        } else {
            res[1].push_back(v[i]);
        }
    }
    
    return res;
}