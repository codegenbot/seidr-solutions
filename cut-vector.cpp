#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n-1; i++) {
        long long sum1 = 0, sum2 = 0;
        
        for (int j = 0; j <= i; j++) {
            sum1 += v[j];
        }
        
        for (int j = i+1; j < n; j++) {
            sum2 += v[j];
        }
        
        long long diff = abs((long long)sum1 - sum2);
        
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + idx+1);
    vector<int> right(v.begin() + idx, v.end());
    
    return {left, right};
}