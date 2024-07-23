#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> left(n);
    copy(v.begin(), v.end(), left.begin());
    
    int min_diff = INT_MAX, idx;
    for (int i = 1; i < n; ++i) {
        int diff = abs(left[i] - left[i-1]);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(idx+1);
    copy(v.begin(), v.begin() + idx+1, result[0].begin());
    result[1].resize(n - idx-1);
    copy(v.begin() + idx+1, v.end(), result[1].begin());
    
    return result;
}