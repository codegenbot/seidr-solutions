#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || v[i] != v[i+1]) {
            res.push_back({v, 0, i});
            break;
        }
    }
    
    return res;
}