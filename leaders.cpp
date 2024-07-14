#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int maxRight = 0;
    
    for(int i = v.size() - 1; i >= 0; i--) {
        if(v[i] >= maxRight) {
            res.push_back(v[i]);
            maxRight = v[i];
        }
    }
    
    reverse(res.begin(), res.end());
    return res;
}