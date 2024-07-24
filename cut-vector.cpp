#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n - 1; i++) {
        int sum1 = accumulate(v.begin(), v.begin() + i, 0);
        int sum2 = accumulate(v.begin() + i + 1, v.end(), 0);
        
        if (abs(sum1 - sum2) <= abs((v[i] - v[0]) + (v[n-1] - v[i]))) {
            res.first = vector<int>(v.begin(), v.begin() + i+1);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    res.first = v;
    res.second = vector<int>();
    
    return res;
}