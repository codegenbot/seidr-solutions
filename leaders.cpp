#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    int n = v.size();
    vector<int> result;
    
    if(n == 1) return {v[0]};
    
    for(int i=n-2; i>=0; i--) {
        if(v[i] >= v[n-1]) {
            result.push_back(v[i]);
        }
    }
    
    result.push_back(v[n-1]);
    
    reverse(result.begin(), result.end());
    
    return result;
}