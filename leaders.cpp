#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> res;
    int n = vec.size();
    
    // The rightmost element is always a leader.
    res.push_back(vec.back());
    
    for(int i = n-2; i >= 0; --i) {
        if(vec[i] >= vec.back()) 
            res.push_back(vec[i]);
    }
    
    reverse(res.begin(), res.end());
    return res;
}