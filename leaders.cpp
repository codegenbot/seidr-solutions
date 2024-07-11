#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> res;
    
    if (n == 0)
        return res;
        
    int max_right = v.back();
    res.push_back(max_right);
    
    for(int i = n-2; i >= 0; i--) {
        if(v[i] >= max_right) {
            max_right = v[i];
            res.push_back(max_right);
        }
    }
    
    return res;
}