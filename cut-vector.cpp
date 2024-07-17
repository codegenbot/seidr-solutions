#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_idx = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(cut_idx);
    result[1].resize(n-cut_idx);
    
    for (int i = 0; i < cut_idx; i++) {
        result[0][i] = v[i];
    }
    for (int i = cut_idx; i < n; i++) {
        result[1][i-cut_idx] = v[i];
    }
    
    return result;
}