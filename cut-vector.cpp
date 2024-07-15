```c++
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n-1)
            res[0].push_back(v[i]);
        else {
            if(abs(v[i] - v[0]) <= abs(v[n-1] - v[i])) {
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
        for(int i = 0; i < n; i++) {
            if(i == 0 || i == n-1)
                res[1].push_back(v[i]);
            else {
                if(abs(v[i] - v[0]) <= abs(v[n-1] - v[i])) {
                    res[1].clear();
                    for(int j = i; j < n; j++)
                        res[1].push_back(v[j]);
                    break;
                }
                else {
                    res[1].clear();
                    for(int j = 0; j < i; j++)
                        res[1].push_back(v[j]);
                    break;
                }
            }
        }
    }
    
    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<vector<int>> result = cutVector(v);
    // process the result here
    return 0;
}