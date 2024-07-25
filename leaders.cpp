#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    
    // The rightmost element is always a leader.
    res.push_back(arr.back());
    
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= arr.back()) {
            res.push_back(arr[i]);
        }
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}