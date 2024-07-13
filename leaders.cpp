#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> result;
    
    // The rightmost element is always a leader.
    if (n > 0) result.push_back(v[n-1]);
    
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] >= v[i+1]) result.push_back(v[i]);
    }
    
    return result;
}