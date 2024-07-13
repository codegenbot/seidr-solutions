#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> res;
    
    // Rightmost element is always a leader.
    res.push_back(v.back());
    
    // Iterate from right to left. If an element is greater than the previous leader, it's a new leader.
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] >= v.back()) {
            res.push_back(v[i]);
            v.pop_back();
        }
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}