#include <vector>
#include <cmath> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n-1; i++) {
        if(abs(v[i] - v[0]) <= abs(v[n-1] - v[i])) {
            res[0].clear();
            for(int j = 0; j <= i; j++)
                res[0].push_back(v[j]);
            res[0].push_back(v[i]);
            break;
        }
    }
    
    int i = n - 2;
    while(i >= 0) {
        if(abs(v[n-1] - v[i]) <= abs(v[n-1] - v[0])) {
            res[1].clear();
            for(int j = i+1; j <= n-1; j++)
                res[1].push_back(v[j]);
            break;
        }
        i--;
    }
    
    return res;
}