```
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n-1; i++) {
        if(abs(v[i] - v[0]) <= abs(v[n-1] - v[i])) {
            res[0].clear();
            for(int j = 0; j <= i; j++)
                res[0].push_back(v[j]);
            break;
        }
        else {
            res[0].clear();
            for(int j = i+1; j < n; j++)
                res[0].push_back(v[j]);
            break;
        }
    }
    
    res[1] = vector<int>(v.begin() + res[0].size(), v.end());
    
    return res;
}``