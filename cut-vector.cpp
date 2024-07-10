#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    int min_diff = INT_MAX;
    int pos = 0;
    
    for(int i=1; i<n; ++i){
        if(abs(v[i-1] - v[i]) < min_diff) {
            min_diff = abs(v[i-1] - v[i]);
            pos = i;
        }
    }
    
    res.push_back(vector<int>(v.begin(), v.begin() + pos));
    res.push_back(vector<int>(v.begin() + pos, v.end()));
    
    return res;
}