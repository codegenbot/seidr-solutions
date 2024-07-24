#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> result;
    int n = v.size();
    
    // The rightmost element is always a leader.
    result.push_back(v[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(v[i] >= v[i+1]) {
            result.push_back(v[i]);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}