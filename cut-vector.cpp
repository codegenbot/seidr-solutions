```c++
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            res[0].push_back(v[i]);
        else {
            if(abs(v[0] - v[i]) <= abs(v[n-1] - v[i])) {
                res[0].clear();
                for(int j = 0; j < i; j++)
                    res[0].push_back(v[j]);
                res[0].push_back(v[i]);
                break;
            }
            else {
                res[0].clear();
                for(int j = i; j < n; j++)
                    res[0].push_back(v[j]);
                break;
            }
        }
    }
    
    if(res[0].size() != n) {
        int half = res[0].size();
        for(int i = 0; i < half; i++) {
            res[1].push_back(v[i]);
        }
        for(int i = half; i < n; i++) {
            res[1].push_back(v[i]);
        }
    }
    
    return res;
}``