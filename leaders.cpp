#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> res;
    
    if (n == 1) return {v[0]};
    
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] >= v[i + 1]) res.push_back(v[i]);
    }
    
    res.push_back(v[n - 1]);
    
    reverse(res.begin(), res.end());
    
    return res;
}