#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] == v[0]) {
            res[0].push_back(v[i]);
        } else {
            break;
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || v[i] == v[n - 1]) {
            res[1].insert(res[1].begin(), v[i]);
        } else {
            break;
        }
    }
    
    return res;
}