#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int idx = -1;
    
    for(int i=0; i<n-1; i++) {
        int diff = abs(v[i] - v[n-i-1]);
        if(diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin()+idx+1);
    vector<int> right(v.begin()+idx, v.end());
    
    return {left, right};
}