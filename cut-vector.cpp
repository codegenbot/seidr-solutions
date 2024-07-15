```cpp
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
        int diff1 = INT_MAX, diff2 = INT_MAX;
        int pos1 = -1, pos2 = -1;
        
        for(int i = 0; i < n; i++) {
            if(i == 0 || i == n-1)
                res[1].push_back(v[i]);
            else {
                int temp1 = abs(v[0] - v[i]);
                int temp2 = abs(v[n-1] - v[i]);
                
                if(temp1 <= temp2 && (temp1 < diff1 || pos1 == -1)) {
                    diff1 = temp1;
                    pos1 = i;
                }
                else if(temp2 < diff2) {
                    diff2 = temp2;
                    pos2 = i;
                }
            }
        }
        
        res[0].clear();
        for(int i = 0; i <= pos1; i++)
            res[0].push_back(v[i]);
        
        res[1].clear();
        for(int i = pos1 + 1; i < n; i++)
            res[1].push_back(v[i]);
    }
    
    return res;
}