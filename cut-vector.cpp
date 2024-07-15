#include <vector>
#include <cmath>  // Include this header for abs function
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    if(n == 1)
        return {{v[0]}};
    
    bool equal = true;
    int diff = INT_MAX, left_diff = INT_MAX, right_diff = INT_MAX;
    for(int i = 1; i < n - 1; i++) {
        if(v[i] != v[0])
            equal = false;
        
        if(abs(v[i] - v[0]) < diff) {
            diff = abs(v[i] - v[0]);
            left_diff = right_diff = diff;
        }
        else if(abs(v[n-1] - v[i]) < right_diff) 
            right_diff = abs(v[n-1] - v[i]);
        
        res[0].clear();
        for(int j = 0; j <= i; j++)
            res[0].push_back(v[j]);
        
        res[1].clear();
        for(int j = i+1; j <= n-1; j++)
            res[1].push_back(v[j]);
    }
    
    return res;
}