#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i=0; i<n-1; i++) {
        if(abs(v[i]-v[i+1]) <= abs(v[0]-v[n-1])) {
            res[0] = v.substr(0, i+1);
            res[1] = v.substr(i+1, n-i-1);
            break;
        }
    } else {
        res[0] = v;
        res[1].clear();
    }
    
    return res;
}